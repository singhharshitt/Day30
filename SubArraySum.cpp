#include <iostream>
#include <vector>
#include <algorithm> // for max function
using namespace std;

int maxSubArraySum(vector<int>& arr, int n) {
    int maxSum = arr[0]; // Initialize max sum as the first element
    int currentSum = arr[0]; // Initialize current sum as the first element

    for (int i = 1; i < n; i++) {
        currentSum = max(arr[i], currentSum + arr[i]); // Update current sum
        maxSum = max(maxSum, currentSum); // Update max sum if current sum is greater
    }

    return maxSum;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxSum = maxSubArraySum(arr, n);
    cout << "The maximum sum of a subarray is: " << maxSum << endl;

    return 0;
}
