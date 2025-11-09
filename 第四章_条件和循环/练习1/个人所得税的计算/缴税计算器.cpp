#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double income; // 月收入
	double ens;  //五险一金
	double tax;  //应纳税
	cin >> income >> ens;
	double INC = income - ens - 3500;  // 所得额
	
	if (INC < 0) {
		tax = 0;
	}
	else if (INC <= 1500) {
		tax = INC * 0.03 - 0;
	}
	else if (INC <= 4500) {
		tax = INC * 0.1 - 105;
	}
	else if (INC <= 9000) {
		tax = INC * 0.2 - 555;
	}
	else if (INC <= 35000) {
		tax = INC * 0.25 - 1005;
	}
	else if (INC <= 55000) {
		tax = INC * 0.3 - 2755;
	}
	else if (INC <= 80000) {
		tax = INC * 0.35 - 5505;
	}
	else {
		tax = INC * 0.45 - 13505;
	}

	cout << "全月应缴税额为" << fixed << setprecision(2) << tax << "元" << endl;
	return 0;
}