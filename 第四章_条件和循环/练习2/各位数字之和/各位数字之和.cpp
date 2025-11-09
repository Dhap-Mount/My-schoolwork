#include <iostream>
using namespace std;
int main()
{
	long long n;
	cin >> n;
	int plus = 0;
	while (n != 0) {
		plus = plus + (n % 10);  // 总数加上最后一位
		n = n / 10;  // 抹去最后一位
	}
	cout << plus << "\n";
	return 0;
}