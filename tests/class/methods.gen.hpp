// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// !!! This file is auto-generated by Reflang. !!!
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

#include <algorithm>
#include <cassert>
#include <stdexcept>
#include <string>
#include <type_traits>

#include "lib/reflang.hpp"

namespace reflang
{

template <>
class Class<Test::ComplexArgument> : public IClass
{
public:
	static const constexpr int MemberCount = 0;

	int GetMemberCount() const override
	{
		return MemberCount;
	}

	const std::string& GetName() const override
	{
		static const std::string name = "Test::ComplexArgument";
		return name;
	}

	// Calls T::operator() on each member of 'Test::ComplexArgument'.
	// Works well with C++14 generic lambdas.
	template <typename T>
	static void IterateMembers(const Test::ComplexArgument& c, T t)
	{
	}

	template <typename T>
	static void IterateMembers(Test::ComplexArgument& c, T t)
	{
	}
};

const int Class<Test::ComplexArgument>::MemberCount;


template <>
class Class<MyClass> : public IClass
{
public:
	static const constexpr int MemberCount = 0;

	int GetMemberCount() const override
	{
		return MemberCount;
	}

	const std::string& GetName() const override
	{
		static const std::string name = "MyClass";
		return name;
	}

	// Calls T::operator() on each member of 'MyClass'.
	// Works well with C++14 generic lambdas.
	template <typename T>
	static void IterateMembers(const MyClass& c, T t)
	{
	}

	template <typename T>
	static void IterateMembers(MyClass& c, T t)
	{
	}
};

const int Class<MyClass>::MemberCount;


}  // namespace reflang
