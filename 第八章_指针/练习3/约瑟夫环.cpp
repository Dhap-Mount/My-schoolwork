#include <iostream>
using namespace std;

struct person {
    int num;
    person* pnext;
};


int main() {
    int m, n;
    cin >> m >> n;
    person* lst = new person[m+1];
    for (int i = 0; i < m; i++) {
        lst[i].num = i;
        lst[i].pnext = &lst[i+1];
    }

    lst[m].num = m;
    lst[m].pnext = &lst[1];
    lst[0].pnext = &lst[1];
    person* pf = &lst[0];

    int count = 0;
    int sum = m;

    person* prev = &lst[0];

    while (sum != 1) {
        if (prev->pnext == pf) {
            prev = pf;
        }
        pf = pf->pnext;
        count++;
        if (count == n) {
            prev->pnext = pf->pnext;
            count = 0;
            sum --;
        }
    }
    pf = pf->pnext;
    cout << pf->num;

    return 0;
}