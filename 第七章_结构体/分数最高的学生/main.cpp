#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct student {
	unsigned int number;
	string       name;
	unsigned int score;
};

bool compare (const student &a, const student &b) {
	if (a.score != b.score) {
		return a.score > b.score;
	}
	return a.number < b.number;
}



int main()
{
	int i = 0;
	student arrSt[100];
	cin >> arrSt[i].number;
	while (arrSt[i].number != -1) {
		cin >> arrSt[i].name >> arrSt[i].score;
		cin >> arrSt[i+1].number;
		i ++;
	}
	
	sort (arrSt, arrSt + i, compare);
	
	cout << arrSt[0].number << " " << arrSt[0].name << " " << arrSt[0].score;
	
	return 0;
}