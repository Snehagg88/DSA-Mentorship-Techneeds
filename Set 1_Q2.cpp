#include <iostream>
using namespace std;
void printCodingNinjas(int n) {
    if (n > 0) {
        cout << "coding ninjas" << endl;
        printCodingNinjas(n - 1); 
    }
}
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    printCodingNinjas(n);
    return 0;
}
