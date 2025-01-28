# Peak Element in Mountain Array

This code implements a binary search solution to find the peak element in a mountain array.

## Problem Description
Given an array that is strictly increasing then strictly decreasing (mountain array), find the index of the peak element. A peak element is an element that is strictly greater than its neighbors.

## Algorithm

### peakIndexInMountainArray Function
```pseudocode
1. Initialize:
   - start = 1 (skip first element)
   - end = array_size - 2 (skip last element)

2. While start <= end:
   a. Calculate mid = start + (end - start)/2
   
   b. Check if mid is peak:
      If A[mid-1] < A[mid] AND A[mid] > A[mid+1]:
      - Return mid (found peak)
   
   c. If A[mid-1] < A[mid]:
      - We're on left slope
      - Peak is on right side
      - start = mid + 1
   
   d. Else:
      - We're on right slope
      - Peak is on left side
      - end = mid - 1

3. Return -1 if no peak found (shouldn't happen in valid mountain array)
```

## Time Complexity
- O(log n) where n is the size of the array
- Binary search reduces search space by half in each iteration

## Space Complexity
- O(1) as it uses only constant extra space

## Key Points
- Uses modified binary search
- Assumes valid mountain array input
- Starts search from index 1 to size-2 (peak can't be at ends)
- Compares with neighbors to determine search direction
- More efficient than linear search O(n)
- Works by using array's mountain property
- Can handle arrays of any size ≥ 3
- Always finds unique peak in valid mountain array
