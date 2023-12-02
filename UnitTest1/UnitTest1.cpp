#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6.3(1)/lab6.3(1).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod)
		{
			const int size = 5;
			int arr[size] = { 1, 2, 3, 4, 5 };

			int result = findMin(arr, size);
			Assert::AreEqual(1, result);
		}
	};
}