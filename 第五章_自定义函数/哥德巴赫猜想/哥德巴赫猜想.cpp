#include <iostream>
using namespace std;

bool is_Prime(int x)
{	
	if (x == 1) return false;
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

int main()
{
	int n;
	cin >> n;
	
	if (n <= 2 || n % 2 != 0) {
		cout << "Not an even larger than 2!" << endl;
	} 
	else if (n == 4) {
		cout << "4=2+2";
	} else {
		int x = 2;
		int y = 0;
		for (x = 2; x < n / 2; x ++) {
			if (is_Prime(x) == false) continue; // 如果不是质数，继续循环
			
			// 如果是质数，判断 n-x 是否是质数，如果是质数就输出，不是就继续循环
			else { 
				y = n - x;
				if (is_Prime(y) == true) {
					cout << n << "=" << x << "+" << y << endl;
				}	
			}
		}
	}
	
	return 0;
}