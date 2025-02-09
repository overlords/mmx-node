/*
 * Router.h
 *
 *  Created on: Dec 17, 2021
 *      Author: mad
 */

#ifndef INCLUDE_MMX_ROUTER_H_
#define INCLUDE_MMX_ROUTER_H_

#include <mmx/RouterBase.hxx>
#include <mmx/NodeAsyncClient.hxx>

#include <vnx/Buffer.h>
#include <vnx/Output.hpp>
#include <vnx/ThreadPool.h>


namespace mmx {

class Router : public RouterBase {
public:
	Router(const std::string& _vnx_name);

protected:
	void init() override;

	void main() override;

	void discover() override;

	vnx::Hash64 get_id() const override;

	std::vector<std::string> get_peers(const uint32_t& max_count) const override;

	std::vector<std::string> get_known_peers() const override;

	std::vector<std::string> get_connected_peers() const override;

	std::shared_ptr<const PeerInfo> get_peer_info() const override;

	void get_blocks_at_async(const uint32_t& height, const vnx::request_id_t& request_id) const override;

	void handle(std::shared_ptr<const Block> value);

	void handle(std::shared_ptr<const Transaction> value);

	void handle(std::shared_ptr<const ProofOfTime> value);

private:
	struct peer_t {
		bool is_synced = false;
		bool is_blocked = false;
		bool is_outbound = false;
		uint32_t height = 0;
		uint32_t msg_size = 0;
		int64_t last_receive_ms = 0;
		uint64_t client = 0;
		uint64_t bytes_send = 0;
		uint64_t bytes_recv = 0;
		vnx::Hash64 node_id;
		std::string address;
		vnx::Memory data;
		vnx::Buffer buffer;
		vnx::BufferInputStream in_stream;
		vnx::MemoryOutputStream out_stream;
		vnx::TypeInput in;
		vnx::TypeOutput out;
		struct {
			uint32_t height = -1;
			uint32_t request = -1;
		} hash_check;
		peer_t() : in_stream(&buffer), out_stream(&data), in(&in_stream), out(&out_stream) {}
	};

	enum sync_state_e {
		FETCH_HASHES,
		FETCH_BLOCKS
	};

	struct sync_job_t {
		uint32_t height = 0;
		sync_state_e state = FETCH_HASHES;
		int64_t start_time_ms = 0;
		std::unordered_set<uint64_t> failed;
		std::unordered_set<uint64_t> pending;
		std::unordered_set<uint64_t> succeeded;
		std::unordered_map<uint32_t, uint64_t> request_map;				// [request id, client]
		std::unordered_map<hash_t, std::set<uint64_t>> hash_map;		// [block hash => clients who have it]
		std::unordered_map<hash_t, std::shared_ptr<const Block>> blocks;
	};

	void update();

	bool process(std::shared_ptr<const Return> ret = nullptr);

	void connect();

	void query();

	void add_peer(const std::string& address, const int sock);

	void connect_task(const std::string& peer) noexcept;

	void print_stats() override;

	uint32_t send_request(uint64_t client, std::shared_ptr<const vnx::Value> method);

	void on_vdf(uint64_t client, std::shared_ptr<const ProofOfTime> proof);

	void on_block(uint64_t client, std::shared_ptr<const Block> block);

	void on_transaction(uint64_t client, std::shared_ptr<const Transaction> tx);

	void relay(uint64_t source, std::shared_ptr<const vnx::Value> msg);

	void send_to(uint64_t client, std::shared_ptr<const vnx::Value> msg);

	void send_to(peer_t& peer, std::shared_ptr<const vnx::Value> msg);

	void send_all(std::shared_ptr<const vnx::Value> msg);

	template<typename R, typename T>
	void send_result(uint64_t client, uint32_t id, const T& value);

	void on_error(uint64_t client, uint32_t id, const vnx::exception& ex);

	void on_request(uint64_t client, std::shared_ptr<const Request> msg);

	void on_return(uint64_t client, std::shared_ptr<const Return> msg);

	void on_msg(uint64_t client, std::shared_ptr<const vnx::Value> msg);

	void on_buffer(uint64_t client, void*& buffer, size_t& max_bytes) override;

	bool on_read(uint64_t client, size_t num_bytes) override;

	void on_pause(uint64_t client) override;

	void on_resume(uint64_t client) override;

	void on_connect(uint64_t client, const std::string& address) override;

	void on_disconnect(uint64_t client) override;

	peer_t& get_peer(uint64_t client);

	peer_t* find_peer(uint64_t client);

private:
	bool is_synced = false;
	bool is_connected = false;
	std::set<std::string> peer_set;
	std::set<std::string> self_addrs;
	std::set<std::string> connecting_peers;

	std::set<uint64_t> synced_peers;
	std::unordered_map<uint64_t, peer_t> peer_map;

	std::unordered_set<hash_t> seen_hashes;

	mutable std::unordered_map<vnx::request_id_t, sync_job_t> sync_jobs;

	vnx::ThreadPool* threads = nullptr;
	std::shared_ptr<NodeAsyncClient> node;
	std::shared_ptr<const ChainParams> params;

	uint32_t node_height = 0;
	uint32_t next_request_id = 0;
	uint32_t verified_vdf_height = 0;

	size_t tx_counter = 0;
	size_t vdf_counter = 0;
	size_t block_counter = 0;
	size_t upload_counter = 0;

	size_t drop_counter = 0;
	size_t tx_drop_counter = 0;
	size_t vdf_drop_counter = 0;
	size_t block_drop_counter = 0;

};


} // mmx

#endif /* INCLUDE_MMX_ROUTER_H_ */
