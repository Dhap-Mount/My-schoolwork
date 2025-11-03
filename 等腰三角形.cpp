#include <iostream>
using namespace std;

int main()
{
	int n;
	int cnt = 0; // 计数
	cin >> n; //星星行数
	
	//星星最多的一行是1+2(n-1)个
	for (cnt = 0; cnt < n; cnt ++) { // 行数循环
	
		//空格循环 每次 n-cnt-1 个
		for (int t = 0; t < n - cnt - 1; t ++) {
			cout << " ";
		}
		// 星号循环 每次 1+2cnt 个
		for (int i = 0; i < 1 + 2 * cnt; i ++) { 
			cout << "*";
		}
		cout << "\n";
	}
	
	return 0;
}
