#include <iostream>
#include <vector>
using namespace std;
int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}
vector<int> factorialNumbers(int n) {
    vector<int> result;
    int fact = 1;
    int i = 1;
    while (fact <= n) {
        result.push_back(fact);
        i++;
        fact = factorial(i);
    }
    return result;
}
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    vector<int> result = factorialNumbers(n);
    cout << "Factorial numbers less than or equal to " << n << " are: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
