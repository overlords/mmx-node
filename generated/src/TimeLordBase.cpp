
// AUTO GENERATED by vnxcppcodegen

#include <mmx/package.hxx>
#include <mmx/TimeLordBase.hxx>
#include <vnx/NoSuchMethod.hxx>
#include <mmx/IntervalRequest.hxx>
#include <mmx/TimeInfusion.hxx>
#include <mmx/TimeLord_stop_vdf.hxx>
#include <mmx/TimeLord_stop_vdf_return.hxx>
#include <vnx/Module.h>
#include <vnx/ModuleInterface_vnx_get_config.hxx>
#include <vnx/ModuleInterface_vnx_get_config_return.hxx>
#include <vnx/ModuleInterface_vnx_get_config_object.hxx>
#include <vnx/ModuleInterface_vnx_get_config_object_return.hxx>
#include <vnx/ModuleInterface_vnx_get_module_info.hxx>
#include <vnx/ModuleInterface_vnx_get_module_info_return.hxx>
#include <vnx/ModuleInterface_vnx_get_type_code.hxx>
#include <vnx/ModuleInterface_vnx_get_type_code_return.hxx>
#include <vnx/ModuleInterface_vnx_restart.hxx>
#include <vnx/ModuleInterface_vnx_restart_return.hxx>
#include <vnx/ModuleInterface_vnx_self_test.hxx>
#include <vnx/ModuleInterface_vnx_self_test_return.hxx>
#include <vnx/ModuleInterface_vnx_set_config.hxx>
#include <vnx/ModuleInterface_vnx_set_config_return.hxx>
#include <vnx/ModuleInterface_vnx_set_config_object.hxx>
#include <vnx/ModuleInterface_vnx_set_config_object_return.hxx>
#include <vnx/ModuleInterface_vnx_stop.hxx>
#include <vnx/ModuleInterface_vnx_stop_return.hxx>
#include <vnx/TopicPtr.hpp>

#include <vnx/vnx.h>


namespace mmx {


const vnx::Hash64 TimeLordBase::VNX_TYPE_HASH(0x311081636f6570efull);
const vnx::Hash64 TimeLordBase::VNX_CODE_HASH(0x8e3e134bd7916ce1ull);

TimeLordBase::TimeLordBase(const std::string& _vnx_name)
	:	Module::Module(_vnx_name)
{
	vnx::read_config(vnx_name + ".input_infuse", input_infuse);
	vnx::read_config(vnx_name + ".input_request", input_request);
	vnx::read_config(vnx_name + ".output_proofs", output_proofs);
	vnx::read_config(vnx_name + ".max_history", max_history);
	vnx::read_config(vnx_name + ".restart_holdoff", restart_holdoff);
	vnx::read_config(vnx_name + ".checkpoint_interval", checkpoint_interval);
}

vnx::Hash64 TimeLordBase::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string TimeLordBase::get_type_name() const {
	return "mmx.TimeLord";
}

const vnx::TypeCode* TimeLordBase::get_type_code() const {
	return mmx::vnx_native_type_code_TimeLordBase;
}

void TimeLordBase::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = mmx::vnx_native_type_code_TimeLordBase;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, input_infuse);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, input_request);
	_visitor.type_field(_type_code->fields[2], 2); vnx::accept(_visitor, output_proofs);
	_visitor.type_field(_type_code->fields[3], 3); vnx::accept(_visitor, max_history);
	_visitor.type_field(_type_code->fields[4], 4); vnx::accept(_visitor, restart_holdoff);
	_visitor.type_field(_type_code->fields[5], 5); vnx::accept(_visitor, checkpoint_interval);
	_visitor.type_end(*_type_code);
}

void TimeLordBase::write(std::ostream& _out) const {
	_out << "{";
	_out << "\"input_infuse\": "; vnx::write(_out, input_infuse);
	_out << ", \"input_request\": "; vnx::write(_out, input_request);
	_out << ", \"output_proofs\": "; vnx::write(_out, output_proofs);
	_out << ", \"max_history\": "; vnx::write(_out, max_history);
	_out << ", \"restart_holdoff\": "; vnx::write(_out, restart_holdoff);
	_out << ", \"checkpoint_interval\": "; vnx::write(_out, checkpoint_interval);
	_out << "}";
}

void TimeLordBase::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object TimeLordBase::to_object() const {
	vnx::Object _object;
	_object["__type"] = "mmx.TimeLord";
	_object["input_infuse"] = input_infuse;
	_object["input_request"] = input_request;
	_object["output_proofs"] = output_proofs;
	_object["max_history"] = max_history;
	_object["restart_holdoff"] = restart_holdoff;
	_object["checkpoint_interval"] = checkpoint_interval;
	return _object;
}

void TimeLordBase::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "checkpoint_interval") {
			_entry.second.to(checkpoint_interval);
		} else if(_entry.first == "input_infuse") {
			_entry.second.to(input_infuse);
		} else if(_entry.first == "input_request") {
			_entry.second.to(input_request);
		} else if(_entry.first == "max_history") {
			_entry.second.to(max_history);
		} else if(_entry.first == "output_proofs") {
			_entry.second.to(output_proofs);
		} else if(_entry.first == "restart_holdoff") {
			_entry.second.to(restart_holdoff);
		}
	}
}

vnx::Variant TimeLordBase::get_field(const std::string& _name) const {
	if(_name == "input_infuse") {
		return vnx::Variant(input_infuse);
	}
	if(_name == "input_request") {
		return vnx::Variant(input_request);
	}
	if(_name == "output_proofs") {
		return vnx::Variant(output_proofs);
	}
	if(_name == "max_history") {
		return vnx::Variant(max_history);
	}
	if(_name == "restart_holdoff") {
		return vnx::Variant(restart_holdoff);
	}
	if(_name == "checkpoint_interval") {
		return vnx::Variant(checkpoint_interval);
	}
	return vnx::Variant();
}

void TimeLordBase::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "input_infuse") {
		_value.to(input_infuse);
	} else if(_name == "input_request") {
		_value.to(input_request);
	} else if(_name == "output_proofs") {
		_value.to(output_proofs);
	} else if(_name == "max_history") {
		_value.to(max_history);
	} else if(_name == "restart_holdoff") {
		_value.to(restart_holdoff);
	} else if(_name == "checkpoint_interval") {
		_value.to(checkpoint_interval);
	} else {
		throw std::logic_error("no such field: '" + _name + "'");
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const TimeLordBase& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, TimeLordBase& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* TimeLordBase::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> TimeLordBase::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "mmx.TimeLord";
	type_code->type_hash = vnx::Hash64(0x311081636f6570efull);
	type_code->code_hash = vnx::Hash64(0x8e3e134bd7916ce1ull);
	type_code->is_native = true;
	type_code->native_size = sizeof(::mmx::TimeLordBase);
	type_code->methods.resize(10);
	type_code->methods[0] = ::vnx::ModuleInterface_vnx_get_config_object::static_get_type_code();
	type_code->methods[1] = ::vnx::ModuleInterface_vnx_get_config::static_get_type_code();
	type_code->methods[2] = ::vnx::ModuleInterface_vnx_set_config_object::static_get_type_code();
	type_code->methods[3] = ::vnx::ModuleInterface_vnx_set_config::static_get_type_code();
	type_code->methods[4] = ::vnx::ModuleInterface_vnx_get_type_code::static_get_type_code();
	type_code->methods[5] = ::vnx::ModuleInterface_vnx_get_module_info::static_get_type_code();
	type_code->methods[6] = ::vnx::ModuleInterface_vnx_restart::static_get_type_code();
	type_code->methods[7] = ::vnx::ModuleInterface_vnx_stop::static_get_type_code();
	type_code->methods[8] = ::vnx::ModuleInterface_vnx_self_test::static_get_type_code();
	type_code->methods[9] = ::mmx::TimeLord_stop_vdf::static_get_type_code();
	type_code->fields.resize(6);
	{
		auto& field = type_code->fields[0];
		field.is_extended = true;
		field.name = "input_infuse";
		field.value = vnx::to_string("timelord.infuse");
		field.code = {12, 5};
	}
	{
		auto& field = type_code->fields[1];
		field.is_extended = true;
		field.name = "input_request";
		field.value = vnx::to_string("timelord.requests");
		field.code = {12, 5};
	}
	{
		auto& field = type_code->fields[2];
		field.is_extended = true;
		field.name = "output_proofs";
		field.value = vnx::to_string("timelord.proofs");
		field.code = {12, 5};
	}
	{
		auto& field = type_code->fields[3];
		field.data_size = 4;
		field.name = "max_history";
		field.value = vnx::to_string(65536);
		field.code = {3};
	}
	{
		auto& field = type_code->fields[4];
		field.data_size = 4;
		field.name = "restart_holdoff";
		field.value = vnx::to_string(60000);
		field.code = {3};
	}
	{
		auto& field = type_code->fields[5];
		field.data_size = 4;
		field.name = "checkpoint_interval";
		field.value = vnx::to_string(50000);
		field.code = {3};
	}
	type_code->build();
	return type_code;
}

void TimeLordBase::vnx_handle_switch(std::shared_ptr<const vnx::Value> _value) {
	const auto* _type_code = _value->get_type_code();
	while(_type_code) {
		switch(_type_code->type_hash) {
			case 0xa4e39be061f13d71ull:
				handle(std::static_pointer_cast<const ::mmx::IntervalRequest>(_value));
				return;
			case 0x7c38bc7150b0d98bull:
				handle(std::static_pointer_cast<const ::mmx::TimeInfusion>(_value));
				return;
			default:
				_type_code = _type_code->super;
		}
	}
	handle(std::static_pointer_cast<const vnx::Value>(_value));
}

std::shared_ptr<vnx::Value> TimeLordBase::vnx_call_switch(std::shared_ptr<const vnx::Value> _method, const vnx::request_id_t& _request_id) {
	switch(_method->get_type_hash()) {
		case 0x17f58f68bf83abc0ull: {
			auto _args = std::static_pointer_cast<const ::vnx::ModuleInterface_vnx_get_config_object>(_method);
			auto _return_value = ::vnx::ModuleInterface_vnx_get_config_object_return::create();
			_return_value->_ret_0 = vnx_get_config_object();
			return _return_value;
		}
		case 0xbbc7f1a01044d294ull: {
			auto _args = std::static_pointer_cast<const ::vnx::ModuleInterface_vnx_get_config>(_method);
			auto _return_value = ::vnx::ModuleInterface_vnx_get_config_return::create();
			_return_value->_ret_0 = vnx_get_config(_args->name);
			return _return_value;
		}
		case 0xca30f814f17f322full: {
			auto _args = std::static_pointer_cast<const ::vnx::ModuleInterface_vnx_set_config_object>(_method);
			auto _return_value = ::vnx::ModuleInterface_vnx_set_config_object_return::create();
			vnx_set_config_object(_args->config);
			return _return_value;
		}
		case 0x362aac91373958b7ull: {
			auto _args = std::static_pointer_cast<const ::vnx::ModuleInterface_vnx_set_config>(_method);
			auto _return_value = ::vnx::ModuleInterface_vnx_set_config_return::create();
			vnx_set_config(_args->name, _args->value);
			return _return_value;
		}
		case 0x305ec4d628960e5dull: {
			auto _args = std::static_pointer_cast<const ::vnx::ModuleInterface_vnx_get_type_code>(_method);
			auto _return_value = ::vnx::ModuleInterface_vnx_get_type_code_return::create();
			_return_value->_ret_0 = vnx_get_type_code();
			return _return_value;
		}
		case 0xf6d82bdf66d034a1ull: {
			auto _args = std::static_pointer_cast<const ::vnx::ModuleInterface_vnx_get_module_info>(_method);
			auto _return_value = ::vnx::ModuleInterface_vnx_get_module_info_return::create();
			_return_value->_ret_0 = vnx_get_module_info();
			return _return_value;
		}
		case 0x9e95dc280cecca1bull: {
			auto _args = std::static_pointer_cast<const ::vnx::ModuleInterface_vnx_restart>(_method);
			auto _return_value = ::vnx::ModuleInterface_vnx_restart_return::create();
			vnx_restart();
			return _return_value;
		}
		case 0x7ab49ce3d1bfc0d2ull: {
			auto _args = std::static_pointer_cast<const ::vnx::ModuleInterface_vnx_stop>(_method);
			auto _return_value = ::vnx::ModuleInterface_vnx_stop_return::create();
			vnx_stop();
			return _return_value;
		}
		case 0x6ce3775b41a42697ull: {
			auto _args = std::static_pointer_cast<const ::vnx::ModuleInterface_vnx_self_test>(_method);
			auto _return_value = ::vnx::ModuleInterface_vnx_self_test_return::create();
			_return_value->_ret_0 = vnx_self_test();
			return _return_value;
		}
		case 0xf7f78eb9f371e6e7ull: {
			auto _args = std::static_pointer_cast<const ::mmx::TimeLord_stop_vdf>(_method);
			auto _return_value = ::mmx::TimeLord_stop_vdf_return::create();
			stop_vdf();
			return _return_value;
		}
	}
	auto _ex = vnx::NoSuchMethod::create();
	_ex->dst_mac = vnx_request ? vnx_request->dst_mac : vnx::Hash64();
	_ex->method = _method->get_type_name();
	return _ex;
}


} // namespace mmx


namespace vnx {

void read(TypeInput& in, ::mmx::TimeLordBase& value, const TypeCode* type_code, const uint16_t* code) {
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
		if(const auto* const _field = type_code->field_map[3]) {
			vnx::read_value(_buf + _field->offset, value.max_history, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[4]) {
			vnx::read_value(_buf + _field->offset, value.restart_holdoff, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[5]) {
			vnx::read_value(_buf + _field->offset, value.checkpoint_interval, _field->code.data());
		}
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			case 0: vnx::read(in, value.input_infuse, type_code, _field->code.data()); break;
			case 1: vnx::read(in, value.input_request, type_code, _field->code.data()); break;
			case 2: vnx::read(in, value.output_proofs, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::mmx::TimeLordBase& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = mmx::vnx_native_type_code_TimeLordBase;
		out.write_type_code(type_code);
		vnx::write_class_header<::mmx::TimeLordBase>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(12);
	vnx::write_value(_buf + 0, value.max_history);
	vnx::write_value(_buf + 4, value.restart_holdoff);
	vnx::write_value(_buf + 8, value.checkpoint_interval);
	vnx::write(out, value.input_infuse, type_code, type_code->fields[0].code.data());
	vnx::write(out, value.input_request, type_code, type_code->fields[1].code.data());
	vnx::write(out, value.output_proofs, type_code, type_code->fields[2].code.data());
}

void read(std::istream& in, ::mmx::TimeLordBase& value) {
	value.read(in);
}

void write(std::ostream& out, const ::mmx::TimeLordBase& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::mmx::TimeLordBase& value) {
	value.accept(visitor);
}

} // vnx