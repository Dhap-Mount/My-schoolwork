#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    long long sum = 0;       // 存储总和
    long long current_fact = 1;  // 存储阶乘值
    
    for (int i = 1; i <= n; ++i) {
        current_fact *= i;   // 计算i!
        sum += current_fact; 
    }
    
    cout << sum << endl;
    return 0;
}