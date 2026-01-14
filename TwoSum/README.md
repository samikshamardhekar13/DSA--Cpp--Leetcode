# Approach (Simple Words)
- We use a map to store numbers with their indices.
- For each number, we check if `target - current number` already exists.
- If yes, we return both indices.

# Data Structures Used
- Vector
- Unordered Map

EXAMPLE:
Input
nums = [2, 7, 11, 15]
target = 9

Output
[0, 1]

Explanation:
nums[0] + nums[1] = 2 + 7 = 9
