#include <iostream>
#include <vector>
using namespace std;
void generateArray(vector<int>& arr, int n) {
    if (n > 0) {
        generateArray(arr, n - 1); 
        arr.push_back(n); 
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<int> resultArray;
    generateArray(resultArray, n);
    cout << "Generated array:" << endl;
    for (int num : resultArray) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
