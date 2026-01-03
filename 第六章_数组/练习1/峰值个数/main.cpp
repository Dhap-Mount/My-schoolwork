#include <iostream>
#include <vector>
using namespace std;
int main() 
{
	int n;
	cin >> n;
	int cnt = 0;
	vector<int> arr(n);
	
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	for (int i = 1; i < n - 1; i ++) {
		if ((arr[i] > arr[i-1] && arr[i] > arr[i+1])||
	    	(arr[i] < arr[i-1] && arr[i] < arr[i+1]))
		{
			cnt ++;
		}
	}
	cout << cnt;
	
	return 0;
}