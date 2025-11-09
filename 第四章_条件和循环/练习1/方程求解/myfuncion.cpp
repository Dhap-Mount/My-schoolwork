#include "myfunction.h"
#include <iostream>
#include <cmath>

// 函数定义/实现

int add(int a, int b) 
{
    return a + b;
}

bool is_Prime(int x)
{	
	if (x == 1) return false;
	if (x == 2) return true; 
	if (x % 2 == 0) return false; 
	
	// 只检查奇数，且到sqrt(x)即可
	for (int i = 3; i * i <= x; i += 2) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}

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