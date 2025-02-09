/*
 * mmx_node.cpp
 *
 *  Created on: Dec 10, 2021
 *      Author: mad
 */

#include <mmx/Node.h>
#include <mmx/Wallet.h>
#include <mmx/TimeLord.h>
#include <mmx/Farmer.h>
#include <mmx/Harvester.h>
#include <mmx/Router.h>
#include <mmx/secp256k1.hpp>
#include <mmx/utils.h>

#include <vnx/vnx.h>
#include <vnx/Server.h>
#include <vnx/Terminal.h>
#include <vnx/TcpEndpoint.hxx>
#include <vnx/addons/HttpServer.h>


int main(int argc, char** argv)
{
	mmx::secp256k1_init();

	std::map<std::string, std::string> options;
	options["t"] = "timelord";

	vnx::init("mmx_node", argc, argv, options);

	const auto params = mmx::get_params();

	bool with_farmer = true;
	bool with_timelord = true;
	std::string endpoint = ":11331";
	vnx::read_config("farmer", with_farmer);
	vnx::read_config("timelord", with_timelord);
	vnx::read_config("endpoint", endpoint);

	{
		vnx::Handle<vnx::Terminal> module = new vnx::Terminal("Terminal");
		module.start_detached();
	}
	{
		vnx::Handle<vnx::Server> module = new vnx::Server("Server", vnx::Endpoint::from_url(endpoint));
		module.start_detached();
	}
	{
		vnx::Handle<vnx::addons::HttpServer> module = new vnx::addons::HttpServer("HttpServer");
		module->components["/api/node/"] = "Node";
		module->components["/api/wallet/"] = "Wallet";
		module.start_detached();
	}
	{
		vnx::Handle<mmx::Router> module = new mmx::Router("Router");
		module.start_detached();
	}
	if(with_timelord) {
		vnx::Handle<mmx::TimeLord> module = new mmx::TimeLord("TimeLord");
		module.start_detached();
	}
	{
		vnx::Handle<mmx::Wallet> module = new mmx::Wallet("Wallet");
		module.start_detached();
	}
	if(with_farmer) {
		vnx::Handle<mmx::Farmer> module = new mmx::Farmer("Farmer");
		module.start_detached();
	}
	if(with_farmer) {
		vnx::Handle<mmx::Harvester> module = new mmx::Harvester("Harvester");
		module.start_detached();
	}
	{
		vnx::Handle<mmx::Node> module = new mmx::Node("Node");
		module.start_detached();
	}

	vnx::wait();

	mmx::secp256k1_free();
	automy::basic_opencl::release_context();

	return 0;
}


