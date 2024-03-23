#include <iostream>
#include <vector>
using namespace std;
vector<int> generateFibonacci(int n) {
    vector<int> fibonacci;
    if (n <= 0)
        return fibonacci;
    fibonacci.push_back(0);
    if (n == 1)
        return fibonacci;
    fibonacci.push_back(1);
    if (n == 2)
        return fibonacci;

    for (int i = 2; i < n; ++i) {
        fibonacci.push_back(fibonacci[i - 1] + fibonacci[i - 2]);
    }

    return fibonacci;
}
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    vector<int> fibonacciNumbers = generateFibonacci(n);
    cout << "First " << n << " Fibonacci numbers: ";
    for (int num : fibonacciNumbers) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
