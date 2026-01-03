#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;

	int arr[n];
	int cpy[n];
	
	for (int i = 0; i < n; i++) {
		cin >> arr [i];
		cpy[i] = arr[i];
	}
	
	sort(arr, arr + n); 
	int max = arr[n - 1];

	cout << max;
	
	for (int i = 0; i < n; i ++) {
		if (cpy[i] == max) {
			cout << " " << i;
		}
	}
	
	return 0;
}