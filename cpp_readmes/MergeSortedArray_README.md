# Merge Sorted Arrays

This code implements an in-place algorithm to merge two sorted arrays into one.

## Problem Description
Given two sorted arrays A and B, where A has enough buffer at the end to hold B, merge array B into A in sorted order.

## Algorithm

### MergeArray Function
```pseudocode
1. Initialize pointers:
   - idx = m + n - 1 (end of merged array)
   - i = m - 1 (end of array A's elements)
   - j = n - 1 (end of array B)

2. While both arrays have elements (i >= 0 && j >= 0):
   a. Compare elements:
      - If A[i] >= B[j]:
        * Place A[i] at idx
        * Decrement i and idx
      - Else:
        * Place B[j] at idx
        * Decrement j and idx

3. While elements remain in array B (j >= 0):
   - Place B[j] at idx
   - Decrement j and idx
```

## Time Complexity
- O(m + n) where:
  - m is the number of elements in array A
  - n is the number of elements in array B

## Space Complexity
- O(1) as it performs in-place merging

## Key Points
- In-place algorithm
- Works from end to beginning to avoid overwriting
- Assumes array A has enough space at end
- Maintains stability of elements
- No need to handle remaining elements of A as they are already in place
- Efficient for sorted arrays
- Preserves the original order of equal elements
