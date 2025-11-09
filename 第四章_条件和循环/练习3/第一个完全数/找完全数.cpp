#include <iostream>
using namespace std;

bool is_Perfect (int number)  // number is what you input.
{
	int add = 0;
	
	if (number < 1) return false;  // is_Perfect number is bigger than 1.
	
	else {
		for (int i = 1; i <= number / 2; i ++) {
			if (number % i == 0) {  // x is the factor of number.
				add += i; //add each factor for the comparision in next step.
			}	
		}
		
		if (add == number) {
			return true;
		}
		else {
			return false;
		}
	}
}

int main()
{

	int origin_num;
	cin >> origin_num;
	
	int x = origin_num + 1; // x to find the bigger Perfect_number.
	int Perfect = 0; // this is the final result.
	
	while (is_Perfect(x) == 0) {
		x ++;
	}
	
	Perfect = x;
	cout << Perfect << endl;
	return 0;
}