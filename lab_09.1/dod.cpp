#include "dod.h"
#include "var.h"

using namespace nsVars;

void nsDod::dod() {
	R = (-(2 * n - 1) / (2 * static_cast<double>(n) + 1)) * (1 / (x * x));
	a *= R;
}