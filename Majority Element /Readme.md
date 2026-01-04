Majority Element — Three Approaches
The majority element is the element that appears more than ⌊n / 2⌋ times in an array.

# Brute Force Approach
Count the frequency of every element and check which one appears more than n / 2 times.
Steps:
1.For each element in the array, count how many times it appears.
2.If its count is greater than n / 2, return it.
Complexity
Time Complexity: O(n²)

# Optimized Approach (Sorting)
If the array is sorted, the majority element will always be at the middle index.
Steps:
1.Sort the array.
2.Return the element at index n / 2.
Complexity
Time Complexity: O(n log n)

# Optimal Approach (Boyer–Moore Voting Algorithm)
Cancel out different elements until only the majority element remains.
Steps:
1.Keep a candidate and a frequency counter.
2.If frequency becomes 0, choose a new candidate.
3.Increase frequency if current element matches the candidate.
4.Decrease frequency otherwise.
Complexity
Time Complexity: O(n)

Time Complexity: O(n)

Space Complexity: O(1)
