
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_mmx_contract_NFT_HXX_
#define INCLUDE_mmx_contract_NFT_HXX_

#include <mmx/contract/package.hxx>
#include <mmx/Contract.hxx>
#include <mmx/contract/Condition.hxx>
#include <mmx/hash_t.hpp>


namespace mmx {
namespace contract {

class NFT : public ::mmx::Contract {
public:
	
	std::shared_ptr<const ::mmx::Contract> owner;
	std::shared_ptr<const ::mmx::contract::Condition> transfer_cond;
	vnx::bool_t is_burnable = 0;
	vnx::bool_t is_transferable = 0;
	
	typedef ::mmx::Contract Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	static constexpr uint64_t VNX_TYPE_ID = 0x7cb24b9888a47906ull;
	
	NFT() {}
	
	vnx::Hash64 get_type_hash() const override;
	std::string get_type_name() const override;
	const vnx::TypeCode* get_type_code() const override;
	
	static std::shared_ptr<NFT> create();
	std::shared_ptr<vnx::Value> clone() const override;
	
	void read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) override;
	void write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const override;
	
	void read(std::istream& _in) override;
	void write(std::ostream& _out) const override;
	
	void accept(vnx::Visitor& _visitor) const override;
	
	vnx::Object to_object() const override;
	void from_object(const vnx::Object& object) override;
	
	vnx::Variant get_field(const std::string& name) const override;
	void set_field(const std::string& name, const vnx::Variant& value) override;
	
	friend std::ostream& operator<<(std::ostream& _out, const NFT& _value);
	friend std::istream& operator>>(std::istream& _in, NFT& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
};


} // namespace mmx
} // namespace contract


namespace vnx {

} // vnx

#endif // INCLUDE_mmx_contract_NFT_HXX_
