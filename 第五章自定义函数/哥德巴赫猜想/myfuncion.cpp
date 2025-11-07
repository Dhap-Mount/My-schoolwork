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

int factorial(int number) // 阶乘
{
	int res = 1;
	for (int i = 1; i <= number; i ++) {
		res = res * i;
	}
	return res;
}

int min_Prime(int n) // 输入n，找最小的质因数
{
	int k = 2;
	for (k = 2; k < n; k ++)
	{
		// 质因数的条件：k是质数并且可以被n整除
		if (is_Prime(k) == true && n % k == 0) { 
			break;
		}
	}
	return k;
}