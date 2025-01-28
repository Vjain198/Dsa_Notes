# Search in Rotated Sorted Array

This code implements a modified binary search algorithm to find an element in a rotated sorted array.

## Problem Description
Given a sorted array that has been rotated at some pivot point and a target value, find the index of the target value in the array. If the target is not found, return -1.

## Algorithm

### searchRotatedArr Function
```pseudocode
1. Initialize:
   - start = 0
   - end = array_size - 1

2. While start <= end:
   a. Calculate mid = start + (end - start)/2
   
   b. If nums[mid] == target:
      - Return mid
   
   c. If left half is sorted (nums[start] <= nums[mid]):
      If target is in left half (nums[start] <= target <= nums[mid]):
      - Search left half (end = mid - 1)
      Else:
      - Search right half (start = mid + 1)
   
   d. Else (right half is sorted):
      If target is in right half (nums[mid] <= target <= nums[end]):
      - Search right half (start = mid + 1)
      Else:
      - Search left half (end = mid - 1)

3. Return -1 if target not found
```

## Time Complexity
- O(log n) where n is the size of the array
- Binary search reduces search space by half in each iteration

## Space Complexity
- O(1) as it uses only constant extra space

## Key Points
- Modified binary search algorithm
- Works on rotated sorted array
- Handles all cases:
  * Array not rotated
  * Array rotated at any point
  * Target present/absent
- Maintains O(log n) complexity
- No need to find rotation point first
- Determines which half is sorted
- Uses sorted half to decide search space
- Works with unique elements
- Efficient for large datasets
