#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\aizen\Documents\lab c++\Lab_9.2.1\Lab_9.2.1\macros.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest92
{
    TEST_CLASS(UnitTest92)
    {
    public:
        TEST_METHOD(TestMin)
        {
            Assert::AreEqual(2, MIN(2, 7));
            Assert::AreEqual(-5, MIN(-3, -5));
        }
        TEST_METHOD(TestMax)
        {
            Assert::AreEqual(14, MAX(9, 14));
            Assert::AreEqual(-1, MAX(-1, -4));
        }
        TEST_METHOD(TestSqr)
        {
            Assert::AreEqual(9, SQR(-3));
            Assert::AreEqual(9, SQR(2 + 1));
        }
        TEST_METHOD(TestBranch1)
        {
            Assert::AreEqual(9.0f, W(5.0f, 1.0f, 2.0f), 0.0001f);
            Assert::AreEqual(8.0f, W(3.0f, -5.0f, 2.0f), 0.0001f);
        }
        TEST_METHOD(TestBranch2)
        {
            Assert::AreEqual(-3.0f, W(2.0f, 5.0f, 0.0f), 0.0001f);
            Assert::AreEqual(2.0f, W(8.0f, 2.0f, 0.0f), 0.0001f);
        }
        TEST_METHOD(TestBoundary)
        {
            Assert::AreEqual(1.0f, W(5.0f, 2.0f, 1.0f), 0.0001f);
            Assert::AreEqual(0.0f, W(2.0f, 2.0f, 1.0f), 0.0001f);
        }
    };
}
