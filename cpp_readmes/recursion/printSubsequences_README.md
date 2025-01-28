# Print All Subsequences

This code implements a recursive solution to print all possible subsequences of an array.

## Problem Description
Given an array of integers, print all possible subsequences (contiguous or non-contiguous sequences that maintain relative order).

## Algorithm

### printSubsequences Function
```pseudocode
1. Base Case:
   If i == n:
   - Print current subsequence (ds)
   - Return

2. For current element (arr[i]):
   
   a. Include current element:
      - Add arr[i] to ds
      - Recursively call with (i+1)
      - Remove arr[i] from ds (backtrack)
   
   b. Exclude current element:
      - Recursively call with (i+1)
```

## Time Complexity
- O(2ⁿ) where n is the size of array
- Each element has two choices (include/exclude)

## Space Complexity
- O(n) for recursion stack
- O(n) for storing current subsequence

## Key Points
- Uses recursive backtracking
- Prints all possible subsequences
- Parameters:
  * i: current index
  * arr: input array
  * n: array size
  * ds: current subsequence
- Features:
  * Maintains element order
  * Includes empty subsequence
  * Prints subsequences as they're found
- Properties of subsequences:
  * Total count = 2ⁿ
  * Can be non-contiguous
  * Must maintain relative order
- Applications:
  * String matching
  * Pattern finding
  * Combination problems
- Implementation notes:
  * Uses vector for dynamic storage
  * Backtracking to explore all possibilities
  * Depth-first approach
