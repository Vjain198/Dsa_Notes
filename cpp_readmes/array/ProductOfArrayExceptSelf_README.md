# Product of Array Except Self

This code implements a solution to find the product of all elements in an array except the element at each index.

## Problem Description
Given an array of integers, return an array where each element at index i is the product of all elements in the original array except the element at index i.

## Algorithm

### getArrayProduct Function
```pseudocode
1. Initialize:
   - Create result array 'ans' of size n, filled with 1s
   - n = size of input array

2. Calculate prefix products:
   For i from 0 to n-1:
   - ans[i] = ans[i-1] * nums[i-1]
   (Each position stores product of all elements to its left)

3. Calculate suffix products and combine:
   Initialize suffix = 1
   For i from n-2 down to 0:
   - suffix = suffix * nums[i+1]
   - ans[i] = ans[i] * suffix
   (Multiply each position by product of all elements to its right)

4. Return result array
```

## Time Complexity
- O(n) where n is the size of the array
- Two passes through the array:
  * One forward pass for prefix products
  * One backward pass for suffix products

## Space Complexity
- O(1) excluding the output array
- Only uses one variable (suffix) for additional storage

## Key Points
- Solves problem without using division
- Uses prefix and suffix products
- Handles edge cases:
  * Arrays with zeros
  * Arrays of any size
- Space-efficient solution
- Result array doesn't count towards space complexity
- Each element in result is product of all numbers except self
- Works with positive and negative numbers
- Maintains original array unchanged
