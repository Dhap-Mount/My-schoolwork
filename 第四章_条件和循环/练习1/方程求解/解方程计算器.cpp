#include <iostream>
#include <cmath> 
#include <iomanip>
using namespace std;

int main ()
{
	double a, b, c;
	double x1, x2;  // 两个解
	double delta;  // 判别式
	cin >> a >> b >> c;
	delta = (b * b) - (4 * a * c);
	
	// 等式不成立的情况
	if ( a == 0 && b == 0 && c != 0) {
		cout << "Not an equation." << endl;
	}

	// a=0时当作一元一次方程计算
	else if (a == 0) {
		x1 = - (c / b);
		cout << "x=" << x1 << endl;
	}

	// 两个根
	else if (delta >= 0){
		x1 = (- b + 1.0 * sqrt(delta)) / (a * 2);
		x2 = (- b - 1.0 * sqrt(delta)) / (a * 2);
		cout << "x1=" << x1 << " x2=" << x2 << endl;
	}
	
	// 没有实数根
	else if (delta < 0) {
		double real = -b / (2 * a);
        double imag = sqrt(-delta) / (2 * a);
            cout << "x1=" << real << "+" << imag << "i" <<
            " x2=" << real << "-"  << imag << "i" <<endl;
	}
	
	return 0;
}
