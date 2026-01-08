# Highlight
In a rotated sorted array, at least one half (left or right) is always sorted.

# Approach (Modified Binary Search)
1.Use two pointers:
* st → start of the array
* end → end of the array
2.While st <= end:
* Compute the middle index mid
* If nums[mid] == target, return mid
3.Determine which half is sorted:
* Left half sorted if nums[st] <= nums[mid]
* Right half sorted otherwise
4.Decide where to continue searching:
* If the target lies inside the sorted half → search there
* Otherwise → search in the other half
5.If the loop ends without finding the target, return -1

