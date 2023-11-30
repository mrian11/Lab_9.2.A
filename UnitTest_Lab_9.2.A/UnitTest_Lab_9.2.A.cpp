#include "pch.h"
#include "CppUnitTest.h"
#include"../Lab_9.2.A/LAB.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab92A
{
	TEST_CLASS(UnitTestLab92A)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int N = 3;
			Student student[N];

			student[0] = { "Яцик", 1, KN,  5, 4, 4 };
			student[1] = { "Артюх", 1, PF, 5, 5, 4 };
			student[2] = { "Цекот", 1, PF, 4, 5, 5 };
			//student[2] = { "Артюх", 1, PF, 5, 5, 4 };

			Assert::AreEqual(BinSearch(student, N, "Артюх", PF, 5), 1);

		}
	};
}
