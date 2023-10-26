#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 5.4/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            double c;
            c = P0(1);
            Assert::AreEqual(c, 0.540302, 0.00001);
        }

        TEST_METHOD(TestMethod2)
        {
            double q;
            q = P1(1, 1);
            Assert::AreEqual(q, 0.540302, 0.00001);
        }

        TEST_METHOD(TestMethod3)
        {
            double w;
            w = P2(1, 1);
            Assert::AreEqual(w, 0.540302, 0.00001);
        }

        TEST_METHOD(TestMethod4)
        {
            double e;
            e = P3(1, 1, 1);
            Assert::AreEqual(e, 0.540302, 0.00001);
        }

        TEST_METHOD(TestMethod5)
        {
            double r;
            r = P4(1, 1, 1);
            Assert::AreEqual(r, 0.540302, 0.00001);
        }
    };
}
