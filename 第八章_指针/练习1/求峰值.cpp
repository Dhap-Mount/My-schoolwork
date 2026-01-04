#include <iostream>
using namespace std;
int main() {
    int line;
    cin >> line;
    int arr[line];

    for (int i = 0; i < line; i++) {
        cin >> arr[i];
    }
    int cnt = 0;

    for (int i = 1; i < line - 1; i++) {
        if ((arr[i - 1] > arr[i] && arr[i] < arr[i + 1]) || (arr[i - 1] < arr[i] && arr[i] > arr[i + 1])) {
            cout << arr[i] << endl;
            cnt++;
        }
    }
    cout << cnt;
    
    return 0;
}