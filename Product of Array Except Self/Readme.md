# Brute Force Approach
Idea:
For every index i, multiply all elements of the array except nums[i].
Steps:
1.Loop through each element
2.For each index, run another loop to calculate the product excluding the current index

Time Complexity:
O(n²) — nested loops
Space Complexity:
O(1) (excluding the output array)

# Optimized Approach (Prefix & Suffix Product)
This is the approach used in the provided solution.
Idea:
Use prefix products to store the product of all elements to the left of an index
Use suffix products to store the product of all elements to the right
Multiply both to get the result for each index
Steps:
1.Initialize an answer array with 1
2.Build prefix products from left to right
3.Build suffix products from right to left and multiply with prefix values

Each index gets:(product of elements before it) × (product of elements after it)

Time Complexity: O(n)
Space Complexity: O(1) (output array not counted)
[Space Complexity Breakdown
Output array ans → Not counted as extra space (required to store the result)
Prefix products → Stored directly in ans, no extra array used
Suffix product → Stored in a single variable
]

EXAMPLE:
Input
nums = [1, 2, 3, 4]

Output
[24, 12, 8, 6]

Explanation
For index 0: 2 × 3 × 4 = 24
For index 1: 1 × 3 × 4 = 12
For index 2: 1 × 2 × 4 = 8
For index 3: 1 × 2 × 3 = 6
