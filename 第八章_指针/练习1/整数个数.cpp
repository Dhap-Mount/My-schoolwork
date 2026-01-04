#include <iostream>
#include <cstring>
using namespace std;

int StrToInt(char *str, int * b) {
    int length = strlen(str);
    int count_num = 0;
    int * input = b; // 输入整型的地址
    for (int i = 0; i < length; i++) {
        if (*(str + i) >= '0' && *(str + i) <= '9') { // 如果出现了整数
            char * p = str + i + 1; // 往后查找
            while (*p >= '0' && *p <= '9') {
                p ++;
            }
            int record = 0; // 用于记录这轮的整型量
            char * pre = str + i;
            int length_int = p - pre;
            while (pre != p) {// 按位转化为整数
                int digit = *pre - '0';
                record = record * 10 + digit;
                pre ++;
            }

            if (*(str + i - 1) == '-') *input = -record;
            else *input = record;
            input ++;
            i += length_int;

            count_num ++;
        } else if (*(str + i) == '-') {
            char * p = str + i + 1; // 往后查找
            while (*p >= '0' && *p <= '9') {
                p ++;
            }
            int record = 0; // 用于记录这轮的整型量
            char * pre = str + i;
            int length_int = p - pre;
            while (pre != p) {// 按位转化为整数
                int digit = *pre - '0';
                record = record * 10 + digit;
                pre ++;
            }
            *input = record;
            input ++;
            i += length_int;

            count_num ++;
        }
    }
    return count_num;
}

int main() {
    char s[2000];
    cin.getline(s,2000);
    int b[2000] = {0};

    int num = StrToInt(s,b);
    for (int i = 0; i < num - 1; i++) {
        cout << b[i] << "\n";
    }
    cout << b[num - 1];
    return 0;
}
// 计数器必须初始化！record
// 遍历的时候使用局部指针操作