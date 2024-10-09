# Day30
<br>
<br>
<b>Ques 1. Write C++ program that take an array of size n from the user and the array contains both positive and negative number. Your task is to calculate the maximum sum of subarray. Print the maximum sum value.</b>
<br>
Input : - n=9 array =-2,1,-3,4,-1,2,1,-5,4<br>
Output:- 6<br>
Explanation The subarray [4,-1,2,1] has the largest sum 6.<br>
<br>
<br>

<b>Ques 2. In an array, the next greater element for a given element x is defined as the first element to the right of x that is larger than x.</b>
<br>
<br>
You are provided with two distinct 0-indexed integer arrays, nums1 and nums2, where nums1 is a subset of nums2.<br>

For each element in nums1, find its corresponding position in nums2, and then identify the next greater element that appears to the right of it in nums2. If no such element exists, return -1 for that element.<br>

Your task is to return an array ans, where each element ans[i] represents the next greater element for nums1[i] as found in nums2. If no next greater element is found, the corresponding entry in ans should be -1.<br>
Note all the required input from the user.<br>
Sample :- n1=3 , n2 =4 nums1 = [4,1,2], nums2 = [1,3,4,2]<br>
Output :- [-1,3,-1].<br>
Explanation :- The next greater element for each value of nums1 is as follows:<br>
- 4 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.<br>
- 1 is underlined in nums2 = [1,3,4,2]. The next greater element is 3.<br>
- 2 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.<br>
