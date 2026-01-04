#include <iostream>
#include <cstring>
using namespace std;

void input(char ** ps, int n);
void sort(char ** ps, int n);
void release(char ** ps, int n);

int main () {
    int line;
    cin >> line;
    cin.ignore();
    char ** ps = new char* [line];

    input(ps, line);
    sort(ps, line);

    for (int i = 0; i < line; i++) {
        cout << ps[i] << endl;
    }

    release(ps, line);
    delete [] ps;
    return 0;
}

void input(char ** ps, int n) {
    char tmp[201];
    for (int i = 0; i < n; i++) {
        cin.getline(tmp, 201);
        *(ps + i) = new char[strlen(tmp)+1]; // 给\0留空间
        strcpy(ps[i],tmp); // copy至ps[i]
    }
}

void sort(char ** ps, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (strcmp(ps[j], ps[j+1]) > 0) {
                swap(ps[j], ps[j+1]);
            }
        }
    }
}

void release(char ** ps, int n) {
    for (int i = 0; i < n; i++) {
        delete[] ps[i];
    }
}