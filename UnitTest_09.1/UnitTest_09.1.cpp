#include "pch.h"
#include "CppUnitTest.h"

#include "../lab_09.1/dod.cpp"
#include "../lab_09.1/var.cpp"
#include "../lab_09.1/sum.cpp"
#include "../lab_09.1/dod.h"
#include "../lab_09.1/var.h"
#include "../lab_09.1/sum.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace nsSum;
using namespace nsDod;
using namespace nsVars;

namespace UnitTest091
{
	TEST_CLASS(UnitTest091)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
		    x = 1.0;
			n = 0;
			a = -1 / x;
			dod();

			Assert::AreEqual(a,-1.);
		}
	};
}
