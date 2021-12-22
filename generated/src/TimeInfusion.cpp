
// AUTO GENERATED by vnxcppcodegen

#include <mmx/package.hxx>
#include <mmx/TimeInfusion.hxx>
#include <mmx/hash_t.hpp>
#include <vnx/Value.h>

#include <vnx/vnx.h>


namespace mmx {


const vnx::Hash64 TimeInfusion::VNX_TYPE_HASH(0x7c38bc7150b0d98bull);
const vnx::Hash64 TimeInfusion::VNX_CODE_HASH(0x2e894864b2f8ed36ull);

vnx::Hash64 TimeInfusion::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string TimeInfusion::get_type_name() const {
	return "mmx.TimeInfusion";
}

const vnx::TypeCode* TimeInfusion::get_type_code() const {
	return mmx::vnx_native_type_code_TimeInfusion;
}

std::shared_ptr<TimeInfusion> TimeInfusion::create() {
	return std::make_shared<TimeInfusion>();
}

std::shared_ptr<vnx::Value> TimeInfusion::clone() const {
	return std::make_shared<TimeInfusion>(*this);
}

void TimeInfusion::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void TimeInfusion::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void TimeInfusion::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = mmx::vnx_native_type_code_TimeInfusion;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, chain);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, values);
	_visitor.type_end(*_type_code);
}

void TimeInfusion::write(std::ostream& _out) const {
	_out << "{\"__type\": \"mmx.TimeInfusion\"";
	_out << ", \"chain\": "; vnx::write(_out, chain);
	_out << ", \"values\": "; vnx::write(_out, values);
	_out << "}";
}

void TimeInfusion::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object TimeInfusion::to_object() const {
	vnx::Object _object;
	_object["__type"] = "mmx.TimeInfusion";
	_object["chain"] = chain;
	_object["values"] = values;
	return _object;
}

void TimeInfusion::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "chain") {
			_entry.second.to(chain);
		} else if(_entry.first == "values") {
			_entry.second.to(values);
		}
	}
}

vnx::Variant TimeInfusion::get_field(const std::string& _name) const {
	if(_name == "chain") {
		return vnx::Variant(chain);
	}
	if(_name == "values") {
		return vnx::Variant(values);
	}
	return vnx::Variant();
}

void TimeInfusion::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "chain") {
		_value.to(chain);
	} else if(_name == "values") {
		_value.to(values);
	} else {
		throw std::logic_error("no such field: '" + _name + "'");
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const TimeInfusion& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, TimeInfusion& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* TimeInfusion::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> TimeInfusion::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "mmx.TimeInfusion";
	type_code->type_hash = vnx::Hash64(0x7c38bc7150b0d98bull);
	type_code->code_hash = vnx::Hash64(0x2e894864b2f8ed36ull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->native_size = sizeof(::mmx::TimeInfusion);
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<TimeInfusion>(); };
	type_code->fields.resize(2);
	{
		auto& field = type_code->fields[0];
		field.data_size = 4;
		field.name = "chain";
		field.code = {3};
	}
	{
		auto& field = type_code->fields[1];
		field.is_extended = true;
		field.name = "values";
		field.code = {13, 3, 4, 11, 32, 1};
	}
	type_code->build();
	return type_code;
}


} // namespace mmx


namespace vnx {

void read(TypeInput& in, ::mmx::TimeInfusion& value, const TypeCode* type_code, const uint16_t* code) {
	if(code) {
		switch(code[0]) {
			case CODE_OBJECT:
			case CODE_ALT_OBJECT: {
				Object tmp;
				vnx::read(in, tmp, type_code, code);
				value.from_object(tmp);
				return;
			}
			case CODE_DYNAMIC:
			case CODE_ALT_DYNAMIC:
				vnx::read_dynamic(in, value);
				return;
		}
	}
	if(!type_code) {
		vnx::skip(in, type_code, code);
		return;
	}
	if(code) {
		switch(code[0]) {
			case CODE_STRUCT: type_code = type_code->depends[code[1]]; break;
			case CODE_ALT_STRUCT: type_code = type_code->depends[vnx::flip_bytes(code[1])]; break;
			default: {
				vnx::skip(in, type_code, code);
				return;
			}
		}
	}
	const char* const _buf = in.read(type_code->total_field_size);
	if(type_code->is_matched) {
		if(const auto* const _field = type_code->field_map[0]) {
			vnx::read_value(_buf + _field->offset, value.chain, _field->code.data());
		}
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			case 1: vnx::read(in, value.values, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::mmx::TimeInfusion& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = mmx::vnx_native_type_code_TimeInfusion;
		out.write_type_code(type_code);
		vnx::write_class_header<::mmx::TimeInfusion>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(4);
	vnx::write_value(_buf + 0, value.chain);
	vnx::write(out, value.values, type_code, type_code->fields[1].code.data());
}

void read(std::istream& in, ::mmx::TimeInfusion& value) {
	value.read(in);
}

void write(std::ostream& out, const ::mmx::TimeInfusion& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::mmx::TimeInfusion& value) {
	value.accept(visitor);
}

} // vnx