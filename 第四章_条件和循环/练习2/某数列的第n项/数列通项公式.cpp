#include <iostream>
using namespace std;

int main()
{
	int n; // 项数
	cin >> n;
	
	long long mo = 2; // 定义分母
	long long so = 3; // 定义分子
	
	if (n == 1) {
		cout << "1/2" << "\n";
	}
	
	else if (n == 2) {
		cout << "3/2" << "\n";
	}
	
	else {
		for (int cnt = 0; cnt < n-2; cnt ++) {
			long long tmp = mo;
			mo = so;
			so = tmp + so;
		}
		cout << so << "/" << mo << endl;
	}
	return 0;
}