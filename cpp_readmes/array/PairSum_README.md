# Pair Sum Problem

This code implements a two-pointer approach to find a pair of elements in a sorted array that sum up to a target value.

## Problem Description
Given an array of integers and a target sum, find two numbers in the array that add up to the target sum. Return their indices.

## Algorithm

### getPairSum Function
```pseudocode
1. Initialize:
   - Empty vector ans for storing result indices
   - i = 0 (left pointer)
   - j = size-1 (right pointer)

2. While i < j:
   a. Calculate current_sum = nums[i] + nums[j]
   
   b. If current_sum > target:
      - Decrement j (move right pointer left)
   
   c. If current_sum < target:
      - Increment i (move left pointer right)
   
   d. If current_sum == target:
      - Add i to result vector
      - Add j to result vector
      - Return result vector

3. Return empty vector if no pair found
```

## Time Complexity
- O(n) where n is the size of the array
- Single pass through the array using two pointers

## Space Complexity
- O(1) excluding the space for result vector
- Only uses two pointers regardless of input size

## Key Points
- Uses two-pointer technique
- Assumes input array is sorted
- Returns first pair found that sums to target
- More efficient than brute force O(n²) approach
- Can be modified to return all pairs that sum to target
- If array is not sorted, need to sort first (would make it O(n log n))
- Returns indices of the pair found
