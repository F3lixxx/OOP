#pragma once
#include <iostream>

#ifdef LIBBYEDYNAMIC_EXPORTS
#define LIBBYE_API __declspec(dllexport)
#else
#define LIBBYE_API __declspec(dllimport)
#endif

namespace Greeting
{
	class Greeter
	{
	public:
		LIBBYE_API std::string greet();
	};
}