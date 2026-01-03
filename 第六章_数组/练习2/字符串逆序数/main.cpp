#include <iostream>
#include <string>
using namespace std;
int main()
{
	string x;
	cin >> x;
	int len = x.size();
	int cnt = 0;
	
	for (int i = 0; i < len; i ++) {
		for (int j = i + 1; j < len; j ++) {
			if (x[i] > x[j]) cnt ++;
		}
	}
	cout << cnt;
	
	return 0;
}