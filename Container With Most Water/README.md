# Brute Force Approach
Idea
Check all possible pairs of lines and calculate the water stored between them.
Steps:
1.Use two nested loops.
2.For every pair (i, j) where i < j:
3.Width = j - i
4.Height = min(height[i], height[j])
5.Area = width × height
6.Keep track of the maximum area.
Complexity:
Time Complexity: O(n²)

# Approach: Two Pointers
This solution uses the two-pointer technique to efficiently compute the maximum water area in O(n) time.
Steps:
1.Initialize two pointers:
2.lp at the beginning of the array
3.rp at the end of the array
4.The width of the container is rp - lp
5.The height of the container is the minimum of the two heights at lp and rp
6.Calculate the current water area:
   area = width × min(height[lp], height[rp])
7.Update the maximum water found so far.
8.Move the pointer pointing to the shorter line inward, because:
  The shorter line limits the container height

Moving the taller line cannot increase the area

Repeat until the two pointers meet.
