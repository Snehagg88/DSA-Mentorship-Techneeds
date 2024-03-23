#include <iostream>
#include <vector>
using namespace std;
vector<int> reverseArray(vector<int>& arr) {
    int n = arr.size();
    vector<int> reversedArray(n);

    for (int i = 0; i < n; ++i) {
        reversedArray[i] = arr[n - i - 1];
    }

    return reversedArray;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    vector<int> reversedArr = reverseArray(arr);

    cout << "Reversed array: ";
    for (int num : reversedArr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
