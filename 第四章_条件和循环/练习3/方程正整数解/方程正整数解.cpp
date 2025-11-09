#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	bool check = false;
	cin >> n;
	int tmp_y = 0; // tmp_y = y*y
	
	for (int x = 0; x * x < n / 2; x ++) {
		int y = sqrt(n - x * x);
		if (y * y + x * x == n) {
			check = true;
			cout << x << "*" << x << "+"
			<< y << "*" << y << "=" << n << endl;
		}
	}
	
	if (check == false) cout << "No result";
	
	return 0;
}