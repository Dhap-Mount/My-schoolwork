#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    bool check = false;
    cin >> n;
    
    for (int x = 1; x * x <= n / 2; x++) {
        int remaining = n - x * x;
        int y = sqrt(remaining);
        
        if (y * y == remaining && y > 0) {
            check = true;
            cout << x << "*" << x << "+"
			<< y << "*" << y << "=" << n << endl;
        }
    }
    
    if (!check) cout << "No result";
    
    return 0;
}