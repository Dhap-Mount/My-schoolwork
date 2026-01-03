#include <iostream>
#include <cctype>
using namespace std;
int main() {
    char line[2000];
    cin.getline(line,2000);
    char * p = line;
    int add = 0;
    while (*p != '\0') {
        if (isdigit(*p)) {
            int current = 0 ;
            // 处理连续的数值
            while (isdigit(*p)) {
                int digit = *p - '0';
                current = current * 10 + digit;
                p++;
            }
            add += current;
        } else p ++;
    }
    cout << add << endl;
    return 0;
}