# Explanation
This problem is solved using Binary Search by taking advantage of the special property of a mountain array.
A mountain array:
1.Strictly increases up to a peak element
2.Strictly decreases after the peak
3.Has exactly one peak

# Pseucode
while(st<=end) {
mid= st+(end - st)/2
if(A[mid-1]<A[mid]>A[mid=1])
return mid
if (A[mid-1]<A[mid]) //Search in right
st=mid+1 
else // Search in left 
end=mid-1

# Remember 
The first and last elements can never be the peak, because:
The peak must have both left and right neighbors
Therefore:
      st = 1
      end = n - 2
      
