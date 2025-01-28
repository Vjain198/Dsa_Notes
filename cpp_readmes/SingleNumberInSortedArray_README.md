# Single Number in Sorted Array

This code implements a binary search solution to find a single element in a sorted array where all other elements appear exactly twice.

## Problem Description
Given a sorted array where every element appears twice except for one element, find that single element. All duplicates appear adjacently.

## Algorithm

### singleNonDuplicate Function
```pseudocode
1. Handle edge cases:
   - If array size is 1, return the only element
   
2. Initialize:
   - start = 0
   - end = array_size - 1

3. While start <= end:
   a. Calculate mid = start + (end - start)/2
   
   b. Check boundary cases:
      - If mid is 0 and A[0] != A[1]: return A[0]
      - If mid is last and A[n-1] != A[n-2]: return A[n-1]
      - If A[mid] differs from both neighbors: return A[mid]
   
   c. If mid is even:
      If A[mid] == A[mid-1]:
      - Search left half (end = mid - 1)
      Else:
      - Search right half (start = mid + 1)
   
   d. If mid is odd:
      If A[mid] == A[mid-1]:
      - Search right half (start = mid + 1)
      Else:
      - Search left half (end = mid - 1)

4. Return -1 if not found
```

## Time Complexity
- O(log n) where n is the size of the array
- Binary search reduces search space by half in each iteration

## Space Complexity
- O(1) as it uses only constant extra space

## Key Points
- Uses binary search
- Works on sorted array
- All duplicates must be adjacent
- Handles edge cases:
  * Single element array
  * Single element at boundaries
- Uses index properties (even/odd)
- More efficient than XOR solution for sorted arrays
- Maintains array order
- No extra space needed
- Works with any integer values
- Assumes exactly one single element
