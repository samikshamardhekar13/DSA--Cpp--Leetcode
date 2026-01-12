# Approach
The merge is performed from the end of the arrays to avoid overwriting elements in A.
Steps:
1.Start three pointers:
2.i → last valid element in A (m - 1)
3.j → last element in B (n - 1)
4.idx → last index of merged array (m + n - 1)
5.Compare elements from the back and place the larger one at A[idx]
6.Decrease pointers accordingly
7.If elements remain in B, copy them into A
