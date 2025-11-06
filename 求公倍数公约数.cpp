#include <iostream>
using namespace std;

int gcd(int a, int b); // 最大公约数
long long lcm(int a, int b); // 最大公倍数

int main()
{
	int a, b;
	cin >> a >> b;
	
	if (a > 0 && b > 0) {
		cout << gcd(a, b) << " " << 
		lcm(a, b) << endl;
	} else cout << "Error" << endl;
	
	return 0;
}

int gcd(int a, int b) // 最大公约数
{
	int r; // 余数
	do {
		r = a % b;
		a = b;
		b = r;
	} while (r != 0);
	
	return a;
}

long long lcm(int a, int b) // 最大公倍数 修改过
{
	return (long long)a * b / gcd(a, b);
}