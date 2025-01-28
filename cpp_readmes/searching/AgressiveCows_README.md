# Aggressive Cows Problem

This code implements a solution to the Aggressive Cows problem, which is a binary search-based problem.

## Problem Description
Given an array of stall positions and the number of cows, find the largest minimum distance possible between any two cows when placing them in the stalls.

## Algorithm

### Main Function (`getDistance`)
```pseudocode
1. Sort the array of stall positions
2. Initialize search space:
   - start = 1
   - end = last stall position - first stall position
3. While start <= end:
   a. Calculate mid = (start + end)/2
   b. Check if it's possible to place cows with mid as minimum distance
   c. If possible:
      - Update answer = mid
      - Search in right half (start = mid + 1)
   d. If not possible:
      - Search in left half (end = mid - 1)
4. Return the answer
```

### Helper Function (`isPossible`)
```pseudocode
1. Initialize:
   - cows_placed = 1
   - last_position = first stall
2. For each stall position:
   a. If (current_position - last_position) >= min_distance:
      - Place a cow (increment cows_placed)
      - Update last_position
   b. If all cows are placed:
      - Return true
3. Return false if couldn't place all cows
```

## Time Complexity
- Sorting: O(N log N)
- Binary Search: O(log M) where M is the search space
- For each binary search step: O(N)
- Overall: O(N log N + N log M)

## Space Complexity
- O(1) extra space (excluding input array)
