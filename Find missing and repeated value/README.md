Example 1:
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.

Approach To Solve 
Brute Force (Concept Only)
1.Generate all possible subarrays
2.Compute the sum for each subarray
3.Track the maximum sum
4.Time Complexity: O(n²)
5.Inefficient for large inputs

Optimized Approach (Kadane’s Algorithm)
We use Kadane’s Algorithm, which works in O(n) time.
Idea:
1.aintain a running sum (currSum) of the current subarray
2.Add each element to currSum
3.If currSum becomes negative, reset it to 0
4.Keep track of the maximum sum found so far

** Why currSum += val is important:
  It allows us to extend the current subarray.
  Using currSum = val would only consider single elements, not subarrays.
