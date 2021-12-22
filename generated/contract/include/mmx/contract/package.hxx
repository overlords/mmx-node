
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_mmx_contract_PACKAGE_HXX_
#define INCLUDE_mmx_contract_PACKAGE_HXX_

#include <vnx/Type.h>

#include <mmx/package.hxx>
#include <vnx/package.hxx>


namespace mmx {
namespace contract {


class Condition;
class Locked;
class MultiSig;
class Nobody;
class PubKey;
class Staking;
class Token;
struct compare_e;
struct condition_e;

extern const vnx::TypeCode* const vnx_native_type_code_Condition; ///< \private
extern const vnx::TypeCode* const vnx_native_type_code_Locked; ///< \private
extern const vnx::TypeCode* const vnx_native_type_code_MultiSig; ///< \private
extern const vnx::TypeCode* const vnx_native_type_code_Nobody; ///< \private
extern const vnx::TypeCode* const vnx_native_type_code_PubKey; ///< \private
extern const vnx::TypeCode* const vnx_native_type_code_Staking; ///< \private
extern const vnx::TypeCode* const vnx_native_type_code_Token; ///< \private
extern const vnx::TypeCode* const vnx_native_type_code_compare_e; ///< \private
extern const vnx::TypeCode* const vnx_native_type_code_condition_e; ///< \private

} // namespace mmx
} // namespace contract


namespace vnx {

void read(TypeInput& in, ::mmx::contract::Condition& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::mmx::contract::Locked& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::mmx::contract::MultiSig& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::mmx::contract::Nobody& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::mmx::contract::PubKey& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::mmx::contract::Staking& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::mmx::contract::Token& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::mmx::contract::compare_e& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::mmx::contract::condition_e& value, const TypeCode* type_code, const uint16_t* code); ///< \private

void write(TypeOutput& out, const ::mmx::contract::Condition& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::mmx::contract::Locked& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::mmx::contract::MultiSig& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::mmx::contract::Nobody& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::mmx::contract::PubKey& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::mmx::contract::Staking& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::mmx::contract::Token& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::mmx::contract::compare_e& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::mmx::contract::condition_e& value, const TypeCode* type_code, const uint16_t* code); ///< \private

void read(std::istream& in, ::mmx::contract::Condition& value); ///< \private
void read(std::istream& in, ::mmx::contract::Locked& value); ///< \private
void read(std::istream& in, ::mmx::contract::MultiSig& value); ///< \private
void read(std::istream& in, ::mmx::contract::Nobody& value); ///< \private
void read(std::istream& in, ::mmx::contract::PubKey& value); ///< \private
void read(std::istream& in, ::mmx::contract::Staking& value); ///< \private
void read(std::istream& in, ::mmx::contract::Token& value); ///< \private
void read(std::istream& in, ::mmx::contract::compare_e& value); ///< \private
void read(std::istream& in, ::mmx::contract::condition_e& value); ///< \private

void write(std::ostream& out, const ::mmx::contract::Condition& value); ///< \private
void write(std::ostream& out, const ::mmx::contract::Locked& value); ///< \private
void write(std::ostream& out, const ::mmx::contract::MultiSig& value); ///< \private
void write(std::ostream& out, const ::mmx::contract::Nobody& value); ///< \private
void write(std::ostream& out, const ::mmx::contract::PubKey& value); ///< \private
void write(std::ostream& out, const ::mmx::contract::Staking& value); ///< \private
void write(std::ostream& out, const ::mmx::contract::Token& value); ///< \private
void write(std::ostream& out, const ::mmx::contract::compare_e& value); ///< \private
void write(std::ostream& out, const ::mmx::contract::condition_e& value); ///< \private

void accept(Visitor& visitor, const ::mmx::contract::Condition& value); ///< \private
void accept(Visitor& visitor, const ::mmx::contract::Locked& value); ///< \private
void accept(Visitor& visitor, const ::mmx::contract::MultiSig& value); ///< \private
void accept(Visitor& visitor, const ::mmx::contract::Nobody& value); ///< \private
void accept(Visitor& visitor, const ::mmx::contract::PubKey& value); ///< \private
void accept(Visitor& visitor, const ::mmx::contract::Staking& value); ///< \private
void accept(Visitor& visitor, const ::mmx::contract::Token& value); ///< \private
void accept(Visitor& visitor, const ::mmx::contract::compare_e& value); ///< \private
void accept(Visitor& visitor, const ::mmx::contract::condition_e& value); ///< \private

/// \private
template<>
struct type<::mmx::contract::Condition> {
	void read(TypeInput& in, ::mmx::contract::Condition& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::mmx::contract::Condition& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::mmx::contract::Condition& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::mmx::contract::Condition& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::mmx::contract::Condition& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code);
	void create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::contract::Condition& value, bool special = false);
};

/// \private
template<>
struct type<::mmx::contract::Locked> {
	void read(TypeInput& in, ::mmx::contract::Locked& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::mmx::contract::Locked& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::mmx::contract::Locked& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::mmx::contract::Locked& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::mmx::contract::Locked& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code);
	void create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::contract::Locked& value, bool special = false);
};

/// \private
template<>
struct type<::mmx::contract::MultiSig> {
	void read(TypeInput& in, ::mmx::contract::MultiSig& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::mmx::contract::MultiSig& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::mmx::contract::MultiSig& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::mmx::contract::MultiSig& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::mmx::contract::MultiSig& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code);
	void create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::contract::MultiSig& value, bool special = false);
};

/// \private
template<>
struct type<::mmx::contract::Nobody> {
	void read(TypeInput& in, ::mmx::contract::Nobody& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::mmx::contract::Nobody& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::mmx::contract::Nobody& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::mmx::contract::Nobody& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::mmx::contract::Nobody& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code);
	void create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::contract::Nobody& value, bool special = false);
};

/// \private
template<>
struct type<::mmx::contract::PubKey> {
	void read(TypeInput& in, ::mmx::contract::PubKey& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::mmx::contract::PubKey& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::mmx::contract::PubKey& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::mmx::contract::PubKey& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::mmx::contract::PubKey& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code);
	void create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::contract::PubKey& value, bool special = false);
};

/// \private
template<>
struct type<::mmx::contract::Staking> {
	void read(TypeInput& in, ::mmx::contract::Staking& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::mmx::contract::Staking& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::mmx::contract::Staking& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::mmx::contract::Staking& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::mmx::contract::Staking& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code);
	void create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::contract::Staking& value, bool special = false);
};

/// \private
template<>
struct type<::mmx::contract::Token> {
	void read(TypeInput& in, ::mmx::contract::Token& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::mmx::contract::Token& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::mmx::contract::Token& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::mmx::contract::Token& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::mmx::contract::Token& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code);
	void create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::contract::Token& value, bool special = false);
};

/// \private
template<>
struct type<::mmx::contract::compare_e> {
	void read(TypeInput& in, ::mmx::contract::compare_e& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::mmx::contract::compare_e& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::mmx::contract::compare_e& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::mmx::contract::compare_e& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::mmx::contract::compare_e& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code);
	void create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::contract::compare_e& value, bool special = false);
};

/// \private
template<>
struct type<::mmx::contract::condition_e> {
	void read(TypeInput& in, ::mmx::contract::condition_e& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::mmx::contract::condition_e& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::mmx::contract::condition_e& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::mmx::contract::condition_e& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::mmx::contract::condition_e& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code);
	void create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::contract::condition_e& value, bool special = false);
};


} // namespace vnx

#endif // INCLUDE_mmx_contract_PACKAGE_HXX_