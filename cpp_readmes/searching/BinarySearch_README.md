# Binary Search Implementation

This code implements the classic binary search algorithm to find a target element in a sorted array.

## Problem Description
Given a sorted array of integers and a target value, find the index of the target value in the array. If the target is not found, return -1.

## Algorithm

### Binary Search Function
```pseudocode
1. Initialize:
   - start = 0
   - end = array length - 1

2. While start <= end:
   a. Calculate mid = start + (end - start)/2
   b. If target > array[mid]:
      - Search in right half (start = mid + 1)
   c. If target < array[mid]:
      - Search in left half (end = mid - 1)
   d. If target == array[mid]:
      - Return mid (target found)

3. Return -1 if target not found
```

## Time Complexity
- O(log n) where n is the size of the array

## Space Complexity
- O(1) as it uses only constant extra space

## Key Points
- The array must be sorted for binary search to work
- The implementation uses `(end - start)/2` to avoid integer overflow
- Returns -1 if element is not found in the array
