#include <iostream>
using namespace std;
int main()
{
	int year, mon, day;
	int res = 0;
	cin >> year >> mon >> day; // 输入年月日
	int check = 1;
	int spe; // 检查是否是闰年
	
	if (mon < 1 || mon > 12) {
    cout << "日期有误" << endl;
    return 0;
    }
    
	if (year % 100 != 0) { // 不是世纪年
		if (year % 4 == 0) {
			spe = 1;
		}
		else {
			spe = 0;
		}
	}
	else { // 是世纪年
		if (year % 400 != 0) {
			spe = 0; //平年
		}
		else {
			spe = 1;
		}
	}
	
	// 判断月份并且加上天数	
	if (mon == 1 && day <= 31) {
		res = day;	
	}
	else if (mon == 2 && day <= 28) {
		res = 31 + day; // 此时如果输入29，本月份的天数不会出错
	}
	else if (mon == 3 && day <= 31) { // 如果上面输入了29，那么下面需要加 1
		res = 59 + day;
	}
	else if (mon == 4 && day <= 30) {
		res = 90 + day;
	}
	else if (mon == 5 && day <= 31) {
		res = 120 + day;
	}
	else if (mon == 6 && day <= 30){
		res = 151 + day;
	}
	else if (mon == 7 && day <= 31) {
		res = 181 + day;
	}
	else if (mon == 8 && day <= 31) {
		res = 212 + day;
	}
	else if (mon == 9 && day <= 30) {
		res = 243 + day;
	}
	else if (mon == 10 && day <= 31) {
		res = 273 + day;
	}
	else if (mon == 11 && day <= 30) {
		res = 304 + day;
	}
	else if (mon == 12 && day <= 31) {
		res = 334 + day;
	}
	else {
		check = 0; //日期不正确
	}

	if (spe == 1 && mon >= 3) {  //闰年的情况
		res = res + 1;
	}
	if (mon == 2 && day == 29) {
		res = 60;
	}
	
	// 检查日期是否正确
	if (check == 1) {
		cout << "这是" << year << "年的第" << res << "天" << endl;
	}
	else {
		cout << "日期有误" << endl;
	}
	
	return 0;
}

// 目前的问题应该是闰年判断有误
