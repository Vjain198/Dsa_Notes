# Print One Subsequence Equal to Sum

This code implements a recursive solution to find and print one subsequence of an array that sums up to a given target.

## Problem Description
Given an array of integers and a target sum, find and print any one subsequence whose elements sum up to the target value.

## Algorithm

### subsequencesEqualsToSum Function
```pseudocode
1. Base Case (i == n):
   If initialSum == target:
   - Print current subsequence (ds)
   - Return true
   Else:
   - Return false

2. For current element (arr[i]):
   
   a. Include current element:
      - Add arr[i] to ds
      - Add arr[i] to initialSum
      - Recursively call with (i+1)
      - If recursive call returns true:
        * Return true
      
   b. Exclude current element:
      - Remove arr[i] from ds
      - Subtract arr[i] from initialSum
      - Recursively call with (i+1)
      - If recursive call returns true:
        * Return true
   
   c. Return false if no valid subsequence found
```

## Time Complexity
- O(2ⁿ) in worst case where n is array size
- Returns after finding first valid subsequence

## Space Complexity
- O(n) for recursion stack
- O(n) for storing subsequence

## Key Points
- Uses recursive backtracking
- Returns first valid subsequence found
- Parameters:
  * i: current index
  * arr: input array
  * n: array size
  * ds: current subsequence
  * target: required sum
  * initialSum: current sum
- Features:
  * Early termination on finding solution
  * Handles positive and negative numbers
  * Maintains subsequence order
- Applications:
  * Subset sum problems
  * Path finding
  * Combination problems
- Optimization:
  * Returns immediately after finding solution
  * No need to explore all possibilities
