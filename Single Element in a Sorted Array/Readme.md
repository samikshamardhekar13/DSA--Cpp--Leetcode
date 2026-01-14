# Approach (Binary Search)
Since the array is sorted, we can use binary search

# Algorithm Steps
1.Use two pointers:
  st = 0 (start)
  end = n - 1 (end)
2.Perform binary search:
  Calculate mid
3.Handle boundary cases:
   If mid == 0 and A[0] != A[1], return A[0]
   If mid == n-1 and A[n-1] != A[n-2], return A[n-1]
4.If A[mid] is different from both neighbors, it is the answer
5.Decide search direction:
  Even index
       If A[mid] == A[mid-1] → move left
   Else → move right
  Odd index
       If A[mid] == A[mid-1] → move right
    Else → move left
6.Continue until the single element is found.

EXAMPLE
Input
nums = [1,1,2,3,3,4,4,8,8]

Output
2

Explanation:
Every number appears twice except 2, which appears once.
