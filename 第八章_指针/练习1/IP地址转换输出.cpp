#include <cmath>
#include <iostream>
using namespace std;

void printIP(char *s) {
    char *p = s;
    int st = 0, nd = 0, rd = 0, th = 0;
    for (int i = 7; i >= 0; i --) {
        st += (*p - '0') * pow(2, i);
        p ++;
    }
    for (int i = 7; i >= 0; i --) {
        nd += (*p - '0') * pow(2, i);
        p ++;
    }
    for (int i = 7; i >= 0; i --) {
        rd += (*p - '0') * pow(2, i);
        p ++;
    }
    for (int i = 7; i > 0; i --) {
        th += (*p - '0') * pow(2, i);
        p ++;
    }
    th +=  (*p - '0');
    cout << st << "." << nd << "." << rd << "." << th;
}

int main() {
    char ip[33];
    cin.getline(ip,33);
    printIP(ip);
}