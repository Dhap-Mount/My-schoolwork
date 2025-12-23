#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

struct player {
	unsigned short id;
	string name;
	unsigned int score[5];
	double ave;
};

void input(player a[],int n){
	for (int i = 0; i < n; i ++) {
		cin >> a[i].id >> a[i].name;
		for (int j = 0; j < 5; j ++) {
		cin >> a[i].score[j];
		}
	}
	return;
}

void final(player a[], int n) {
	for (int i = 0; i < n; i ++) {
		sort(a[i].score, a[i].score + 5);
		double add = a[i].score[1]+a[i].score[2]+a[i].score[3];
		a[i].ave = add / 3.0;
	}
	return;
}

void output(player a[], int n) {
	for (int i = 0; i < n; i ++) {
		cout << a[i].id << " " << a[i].name << " "<< a[i].ave << "\n";
	}
}

bool compare(const player &a, const player &b) {
	if (a.ave != b.ave) {
		return a.ave > b.ave;
	} 
	return a.id < b.id;
}

int main ()
{
	int n;
	cin >> n; // 一共多少人
	player a[40]; 
	input(a, n);
	final(a, n);
	sort(a, a+n, compare);
	output(a, n);
	return 0;
}