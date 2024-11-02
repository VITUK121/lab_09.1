#include <iostream>
#include <iomanip>
#include <corecrt_math_defines.h>

#include "var.h"
#include "dod.h"
#include "sum.h"

using namespace std;

using namespace nsVars;
using namespace nsDod;
using namespace nsSum;

int main(){
	setlocale(LC_ALL, "ukr");

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;

	cout << fixed;
	cout << "---------------------------------------\n";
	cout << "|" << setw(28) << "Заголовок таблицi" << setw(10) << "|" << "\n";
	cout << "---------------------------------------\n";
	cout << "|" << setw(3) << "x" << setw(4) << "|" << setw(10) << "arctg(x)" << setw(2) << "|" << setw(5) << "S" << setw(5) << "|" << setw(5) << "n" << setw(5) << "|\n";
	cout << "---------------------------------------\n";

	n = 0;
	x = xp;
	while (x <= xk) {
		sum();
		cout << "|" << setw(5) << setprecision(2) << x << " |"
			<< setw(8) << setprecision(5) << atan(x) << "   |"
			<< setw(8) << setprecision(5) << M_PI / 2 + S << " |"
			<< setw(6) << n << "  |"
			<< endl;
		x += dx;
	}
}