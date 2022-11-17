#include "pch.h"
#include "CppUnitTest.h"
#include <cassert>
#include <iostream>
#include "../лаба 6.2_1/лаба 6.2_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace юніттест621
{
	TEST_CLASS(юніттест621)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a;
			a = main();
			Assert::AreEqual(a, 0);
		}
	};
}
