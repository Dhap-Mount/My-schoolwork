#include <iostream>
using namespace std;

char * findChar(char *s, char c) {
    while (*s != '\0') {
        if (*s == c) {
            return s;
        }
        s++;
    }
    return nullptr;
}

int main() {
    char s[200];
    char target;

    cin.getline(s, 200);
    cin.get(target);

    char *p = findChar(s, target);
    if (p == nullptr) {
        cout << "No found" << endl;
        return 0;
    } else cout << p;
    return 0;
}