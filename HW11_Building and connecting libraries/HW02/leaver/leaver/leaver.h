#pragma once
#include <iostream>

#ifdef leaver_EXPORTS
#define leaver_API __declspec(dllexport)
#else
#define leaver_API __declspec(dllimport)
#endif

namespace Greeting
{
	class Greeter
	{
	public:
		leaver_API std::string greet();
	};
}