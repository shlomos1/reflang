// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// !!! This file is auto-generated by Reflang. !!!
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

#include <algorithm>
#include <cassert>
#include <stdexcept>
#include <string>

#include "lib/reflang.hpp"

namespace reflang
{

template <>
class Function<decltype(ns::NamespacedFunction), ns::NamespacedFunction> : public IFunction
{
	int num_args() const override
	{
		return 0;
	}

	const std::string& GetName() const override
	{
		static const std::string name = "ns::NamespacedFunction";
		return name;
	}

	Object Invoke(const std::vector<Object>& args) override
	{
		if (args.size() != 0)
		{
			throw std::invalid_argument("count");
		}

		ns::NamespacedFunction();
		return Object();
	}
};

namespace
{
	// Object to auto-register ns::NamespacedFunction.
	struct ns__NamespacedFunction_registrar
	{
		ns__NamespacedFunction_registrar()
		{
			::reflang::registry::internal::Register(
				std::make_unique<
					Function<
						decltype(ns::NamespacedFunction),
						ns::NamespacedFunction>>());
		}
	} ns__NamespacedFunction_instance;
}


template <>
class Function<decltype(GlobalFunction), GlobalFunction> : public IFunction
{
	int num_args() const override
	{
		return 0;
	}

	const std::string& GetName() const override
	{
		static const std::string name = "GlobalFunction";
		return name;
	}

	Object Invoke(const std::vector<Object>& args) override
	{
		if (args.size() != 0)
		{
			throw std::invalid_argument("count");
		}

		GlobalFunction();
		return Object();
	}
};

namespace
{
	// Object to auto-register GlobalFunction.
	struct GlobalFunction_registrar
	{
		GlobalFunction_registrar()
		{
			::reflang::registry::internal::Register(
				std::make_unique<
					Function<
						decltype(GlobalFunction),
						GlobalFunction>>());
		}
	} GlobalFunction_instance;
}


}  // namespace reflang
