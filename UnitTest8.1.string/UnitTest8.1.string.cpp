#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_08_1.string/Lab_08_1.string.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81string
{
	TEST_CLASS(UnitTest81string)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			std::string rjadok = "n1olll";
			int k = 1;
			int t = Count(rjadok);
			Assert::AreEqual(t, k);


		}
	};
}
