#include <algorithm>
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

void separate(char *s, char*s1, char*s2) {
    int length = strlen(s);
    char * find_plus = s;
    // 查找加号
    while (*find_plus != '+') {
        find_plus ++;
    }

    // 输入s1
    char * pre = s;
    int length_s1 = find_plus - pre;
    for (int i = 0; i < length_s1; i++) {
        s1[i] = *(pre + i);
    }
    s1[length_s1] = '\0';

    // 输入s2
    int cnt = 0;
    char * p = find_plus + 1;
    while (*p != '\0') {
        *(s2 + cnt) = *p;
        cnt ++;
        p ++;
    }
    s2[cnt] = '\0';
}

void add(char *s1, char *s2) {
    int length_s1 = strlen(s1);
    int length_s2 = strlen(s2);
    int length_max = max(length_s1, length_s2);

    int plus[205] = {0}; 

    for (int i = 0; i < length_max; i++) {
        int val1 = 0, val2 = 0;
        if (i < length_s1) val1 = s1[length_s1 - 1 - i] - '0';
        if (i < length_s2) val2 = s2[length_s2 - 1 - i] - '0';

        plus[i] += val1 + val2;
        if (plus[i] >= 10) {
            plus[i + 1] += 1;
            plus[i] %= 10;
        }
    }

    int actual_len = length_max;
    if (plus[length_max] > 0) {
        actual_len++;
    }

    // 逆序翻转
    reverse(plus, plus + actual_len);

    // 打印
    for (int i = 0; i < actual_len; i++) {
        cout << plus[i];
    }
    cout << endl;
}

int main() {
    char total[200];
    cin.getline(total,200);

    char a[200] = {0};
    char b[200] = {0};
    separate(total,a,b);
    add(a,b);
    return 0;
}