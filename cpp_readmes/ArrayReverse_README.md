# Array Reverse Algorithm

This code implements a simple in-place array reversal algorithm.

## Problem Description
Given an array of integers, reverse the order of elements in the array.

## Algorithm

### Array Reverse Function
```pseudocode
1. Initialize:
   - start = 0
   - end = array size - 1

2. While start < end:
   a. Swap elements at start and end positions
   b. Increment start
   c. Decrement end

3. Array is reversed when start meets or crosses end
```

## Time Complexity
- O(n/2) ≈ O(n) where n is the size of the array
  - The algorithm only needs to traverse half the array since it swaps elements from both ends

## Space Complexity
- O(1) as it performs in-place reversal without using extra space

## Key Points
- In-place algorithm (doesn't require extra space)
- Modifies the original array
- Uses two-pointer technique
- Works with arrays of any size
