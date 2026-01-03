#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char ch[100];
	cin.getline(ch,99);
	int len = strlen(ch);
	char cpy[100];
	strcpy(cpy, ch);
	
	for (int i = 1; i < len; i ++) {
		for (int j = i-1; j >=0; j --) {
			if (cpy[j] == ch[i]) {
				ch[i] = ','; // 把重复出现的都设置为，
			}
		}
	}
	for (int i = 0; i < len; i ++) {
		if (ch[i] == ',') continue;
		else cout << ch[i];
	}
	
	return 0;
}

int main()
{
	bool seen[256] = {0};
}