#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab1,3/Fraction.h"
#include "C:\Users\Софія\source\repos\lab1,3\lab1,3\Fraction.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Fraction d;
			bool j = d.Init(3, 2);
			Assert::AreEqual(j, true);
		}
	};
}
