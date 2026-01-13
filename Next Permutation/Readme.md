The Next Permutation problem is  to rearrange a given array of numbers into the next lexicographically greater permutation.

# Approach
We solve this problem in three main steps:
1. Find the Pivot Index
Traverse the array from right to left.
Find the first index i such that:
A[i] < A[i + 1]
This index is called the pivot.
The pivot indicates where the next greater permutation can be formed.
🔹 If no such index exists, the array is already the largest permutation.

2. Handle the Edge Case (No Pivot)
If no pivot is found, reverse the entire array.
This converts the array into the smallest permutation.
Example:
[3, 2, 1] → [1, 2, 3]

3. Swap Pivot with Next Greater Element
Traverse the array from the right end again.
Find the first element greater than A[pivot].
Swap it with the pivot element.
This ensures the permutation increases by the smallest possible amount.

4. Reverse the Suffix
Reverse the subarray from:
pivot + 1  to  end


This puts the suffix in ascending order, making the result the next immediate permutation.
