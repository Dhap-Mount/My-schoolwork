#include <iostream>
#include <string>
#include <cstring>
using namespace std;

struct word{
	string w;
	unsigned int rev;
};

void input(word w, int n)
{
	for (int i = 0; i < n; i ++) {
		cin >> student[i].w;
	}
}



int main()
{
	int n;
	cin >> n;
	word w[100];
	input(w, n);
}