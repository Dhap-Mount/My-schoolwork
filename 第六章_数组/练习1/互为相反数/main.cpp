#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int cnt = 0;
	vector<double> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	for (int i = 0; i < n; i ++) {
		for (int j = i + 1; j < n; j ++) {
			if (a[i] == -a[j] && a[i] != 0) cnt ++;
		}
	}
	cout << cnt;
	
	return 0;
}