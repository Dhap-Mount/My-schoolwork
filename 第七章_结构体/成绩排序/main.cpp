#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

struct student {
	unsigned short id;
	unsigned short ch;
	unsigned short ma;
	unsigned short en;
	unsigned short plus;
	unsigned short add; // 语文数学总分
	unsigned short higher; // 语文数学最高分
	unsigned short arrange; // 排名
};

bool compare_score (const student &a, const student &b) { // 按照成绩排名

	if (a.plus != b.plus) {
		return a.plus > b.plus; // 先比较总分
	} else if (a.add != b.add) {
		return a.add > b.add; // 再比较语数总分
	} else if (a.higher != b.higher) {
		return a.higher > b.higher; // 最后比最高分
	} else {
		return false; // 并列
	}
}

bool compare_id (const student &a, const student &b) // 按照id顺序排名
{
	return a.id < b.id;
}

void input (student a[], int n)
{
	for (int i = 0; i < n; i ++) {
		cin >> a[i].ch >> a[i].ma >> a[i].en;
		a[i].plus = a[i].ch + a[i].ma + a[i].en;
		a[i].add = a[i].ch + a[i].ma;
		a[i].higher = max(a[i].ch, a[i].ma);
		a[i].id = i;
	}
	
	return;
}


int main() {
	static int same = 0; //并列的人数
	int n; // 同学的人数
	cin >> n;
	student a[50];
	input(a, n);
	// 先按照成绩排序
	sort(a, a+n, compare_score); 
	// 根据成绩排名赋予各自排名
	a[0].arrange = 1; // 排在第一个的是第一名
	for (int i = 1; i < n; i ++) {
		//如果所有成绩都和上一位同学一样，那么就并列
		if (   i > 0
		    && a[i].plus == a[i-1].plus
		    && a[i].higher == a[i-1].higher
			&& a[i].add == a[i-1].add) 
		{
			a[i].arrange = a[i-1].arrange;
		} 
		// 否则名次靠后
		else a[i].arrange = i + 1;
	}
	// 再按照id排序
	sort(a, a+n, compare_id); 
	for (int i = 0; i < n; i ++) {
		cout << a[i].arrange << "\n";
	}
	
	return 0;
}