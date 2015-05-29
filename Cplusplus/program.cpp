// Cplusplus.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>

	int foobar()
	{
		return 4;
	}

	int& foo()
	{
		int x = 0;
		return x;
	}

	void rvslvalue()
	{
		// lvalues:
		//
		int i = 42;
		i = 43; // ok, i is an lvalue
		int* p = &i; // ok, i is an lvalue
		int& foo();
		foo() = 42; // ok, foo() is an lvalue
		int* p1 = &foo(); // ok, foo() is an lvalue

		// rvalues:
		//
		int foobar();
		int j = 0;
		j = foobar(); // ok, foobar() is an rvalue
		// int* p2 = &foobar(); // error, cannot take the address of an rvalue
		j = 42; // ok, 42 is an rvalue
	}

	void func(int &&x)
	{
	}

	void func(int &x)
	{
	}

	void bar2()
	{
		func(52);
		int x = 42;
		func(x);
		func(x * 4);
	}



int _tmain(int argc, _TCHAR* argv[])
{
	bar2();


	std::vector<int> collection;

	for (auto x : collection)
	{
		// loop body
	}

	for (auto it = begin(collection); it != end(collection); ++it)
	{
		auto x = *it; // notice the copy!
		{
			// loop body
		}
	}

	// better:
	for (auto& x : collection)
	{
		// loop body
	}

	for (auto it = begin(collection); it != end(collection); ++it)
	{
		auto& x = *it; // notice the reference!
		{
			// loop body
		}
	}

	auto x2 = [](int arg) -> int { return arg * 2; };
	x2(10); // == 20;


	int localVariable = 14;
	auto f = [&localVariable](int arg) -> int { return arg + localVariable; };
	f(10); // == 24;
}
