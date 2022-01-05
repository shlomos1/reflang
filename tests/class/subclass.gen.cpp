// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// !!! This file is auto-generated by Reflang. !!!
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
#include "subclass.gen.hpp"

#include <algorithm>
#include <cassert>
#include <stdexcept>
#include <type_traits>

namespace reflang
{


const int Class<MyClass::Subclass>::FieldCount;
const int Class<MyClass::Subclass>::StaticFieldCount;
const int Class<MyClass::Subclass>::MethodCount;
const int Class<MyClass::Subclass>::StaticMethodCount;

int Class<MyClass::Subclass>::GetFieldCount() const
{
	return FieldCount;
}

Reference Class<MyClass::Subclass>::GetField(const Reference& r, const std::string& name) const
{
		MyClass::Subclass& o = r.GetT<MyClass::Subclass>();
		if (name == "field")
		{
			return Reference(o.field);
		}
	throw Exception("Invalid name passed to GetField().");
}

int Class<MyClass::Subclass>::GetStaticFieldCount() const
{
	return StaticFieldCount;
}

Reference Class<MyClass::Subclass>::GetStaticField(const std::string& name) const
{
		if (name == "static_field")
		{
			return Reference(MyClass::Subclass::static_field);
		}
	throw Exception("Invalid name passed to GetStaticField().");
}

int Class<MyClass::Subclass>::GetMethodCount() const
{
	return MethodCount;
}

std::vector<std::unique_ptr<IMethod>> Class<MyClass::Subclass>::GetMethod(const std::string& name) const
{
	std::vector<std::unique_ptr<IMethod>> results;
	if (name == "method")
	{
		results.push_back(std::make_unique<Method<decltype(&MyClass::Subclass::method), &MyClass::Subclass::method>>());
	}

	return results;
}

int Class<MyClass::Subclass>::GetStaticMethodCount() const
{
	return StaticMethodCount;
}

std::vector<std::unique_ptr<IFunction>> Class<MyClass::Subclass>::GetStaticMethod(
		const std::string& name) const
{
	std::vector<std::unique_ptr<IFunction>> results;
	if (name == "static_method")
	{
		results.push_back(std::make_unique<Function<void(*)(), MyClass::Subclass::static_method>>());
	}

	return results;
}

static const std::string MyClass__Subclass_name = "MyClass::Subclass";

const std::string& Class<MyClass::Subclass>::GetName() const
{
	return MyClass__Subclass_name;
}

// MyClass::Subclass methods definitions.
static std::string MyClass__Subclass_method_name = "method";

const std::string& Method<decltype(&MyClass::Subclass::method), &MyClass::Subclass::method>::GetName() const
{
	return MyClass__Subclass_method_name;
}

int Method<decltype(&MyClass::Subclass::method), &MyClass::Subclass::method>::GetParameterCount() const
{
	return 0;
}

Object Method<decltype(&MyClass::Subclass::method), &MyClass::Subclass::method>::Invoke(
		const Reference& o, const std::vector<Object>& args)
{
	if (args.size() != 0)
	{
		throw Exception("Invoke(): bad argument count.");
	}
	((o.GetT<MyClass::Subclass>()).*(&MyClass::Subclass::method))();
	return Object();
}

// End of MyClass::Subclass methods definitions.
// MyClass::Subclass static methods definitions.

int Function<void(*)(), MyClass::Subclass::static_method>::GetParameterCount() const
{
	return 0;
}

Parameter Function<void(*)(), MyClass::Subclass::static_method>::GetReturnType() const
{
	Parameter result;
	result.Type = "void";
	return result;
}

Parameter Function<void(*)(), MyClass::Subclass::static_method>::GetParameter(int i) const
{
	if (i < 0 || i >= GetParameterCount())
	{
		throw Exception("Argument out of range.");
	}

	Parameter result;
	return result;
}

static const std::string MyClass__Subclass__static_method_name = "MyClass::Subclass::static_method";

const std::string& Function<void(*)(), MyClass::Subclass::static_method>::GetName() const
{
	return MyClass__Subclass__static_method_name;
}

Object Function<void(*)(), MyClass::Subclass::static_method>::Invoke(const std::vector<Object>& args)
{
	if (args.size() != GetParameterCount())
	{
		throw Exception("Invoke(): bad argument count.");
	}

	MyClass::Subclass::static_method();
	return Object();
}

namespace
{
	// Object to auto-register MyClass::Subclass::static_method.
	struct MyClass__Subclass__static_method_registrar
	{
		MyClass__Subclass__static_method_registrar()
		{
			::reflang::registry::internal::Register(
					std::make_unique<Function<void(*)(), MyClass::Subclass::static_method>>());
		}
	} MyClass__Subclass__static_method_instance;
}
// End of MyClass::Subclass static methods definitions.


namespace
{
	// Object to auto-register MyClass::Subclass.
	struct MyClass__Subclass_registrar
	{
		MyClass__Subclass_registrar()
		{
			::reflang::registry::internal::Register(
					std::make_unique<Class<MyClass::Subclass>>());
		}
	} MyClass__Subclass_instance;
}

}  // namespace reflang
