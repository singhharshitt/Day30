#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int, int> nextGreaterMap;
    stack<int> st;

    // Traverse nums2 from right to left
    for (int i = nums2.size() - 1; i >= 0; --i) {
        int current = nums2[i];

        // Pop elements from the stack if they are less than or equal to the current element
        while (!st.empty() && st.top() <= current) {
            st.pop();
        }

        // If stack is not empty, the top element is the next greater element
        if (!st.empty()) {
            nextGreaterMap[current] = st.top();
        } else {
            nextGreaterMap[current] = -1;  // No greater element
        }

        // Push the current element onto the stack
        st.push(current);
    }

    // Create the result for nums1 based on the nextGreaterMap
    vector<int> result;
    for (int num : nums1) {
        result.push_back(nextGreaterMap[num]);
    }

    return result;
}

int main() {
    int n1, n2;
    
    // Input size of nums1 and nums2
    cout << "Enter the size of nums1: ";
    cin >> n1;
    cout << "Enter the size of nums2: ";
    cin >> n2;
    
    vector<int> nums1(n1), nums2(n2);
    
    // Input elements of nums1
    cout << "Enter the elements of nums1: ";
    for (int i = 0; i < n1; ++i) {
        cin >> nums1[i];
    }
    
    // Input elements of nums2
    cout << "Enter the elements of nums2: ";
    for (int i = 0; i < n2; ++i) {
        cin >> nums2[i];
    }
    
    // Get the result
    vector<int> result = nextGreaterElement(nums1, nums2);
    
    // Output the result
    cout << "The next greater elements are: ";
    for (int num : result) {
        cout << num << " ";
    }
    
    return 0;
}
