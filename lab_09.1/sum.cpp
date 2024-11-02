#include "var.h"
#include "dod.h"
#include "sum.h"
#include <math.h>

using namespace nsVars;
using namespace nsDod;

void nsSum::sum() {
		n = 0;
		a = -1 / x;
		S = a;
		do {
			n++;
			dod();
			S += a;
		} while (fabs(a) >= eps);
	}