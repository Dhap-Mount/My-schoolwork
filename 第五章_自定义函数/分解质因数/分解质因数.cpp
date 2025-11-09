#include <iostream>
using namespace std;

void FacPrimely(int n);
bool is_Prime(int x);
int min_Prime(int n);

int main()
{
	int x;
	cin >> x;
	cout << x << "=";
	FacPrimely(x);
	return 0;
}

void FacPrimely(int n)
{
	// 素数输出自己
	if (is_Prime(n) == true) cout << n; 
	//不是素数的找素因数
	else {
		while (n != min_Prime(n)) { // 由于n已经被除掉，所以不会执行最后一次循环
			int k = min_Prime(n);
			n = n / k;
			cout << k << "*";
		}
		int k = min_Prime(n); // 硬加一次循环
		n = n / k;
		cout << k << endl;
		// 误打误撞解决好了"*"号和循环次数的问题
	}
}

int min_Prime(int n) // 输入n，找最小的质因数
{
	int k = 2;
	for (k = 2; k < n; k ++)
	{
		// 是质因数的条件：是质数并且可以被n整除
		if (is_Prime(k) == true && n % k == 0) { 
			break;
		}
	}
	return k;
}

bool is_Prime(int x)
{	
	if (x == 1) return true;
	if (x == 2) return true; 
	if (x % 2 == 0) return false; 
	
	// 只检查奇数，且到sqrt(x)即可
	for (int i = 3; i * i <= x; i += 2) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}
// 这种屎山代码都tm能过真是逆天了