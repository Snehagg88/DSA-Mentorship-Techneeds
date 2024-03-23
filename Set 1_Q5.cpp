#include <iostream>
using namespace std;
int sumOfFirstNNaturalNumbers(int n) {
    return (n * (n + 1)) / 2;
}
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int sum = sumOfFirstNNaturalNumbers(n);
    cout << "Sum of first " << n << " natural numbers is: " << sum << endl;
    return 0;
}
