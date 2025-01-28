# Painter's Partition Problem

This code implements a solution to the Painter's Partition Problem using binary search approach.

## Problem Description
Given an array of integers where each element represents the time taken to paint a board, and a number of painters, find the minimum time to paint all boards. Constraints:
- One painter can paint only contiguous sections of boards
- A board can only be painted by one painter
- Each painter takes 1 unit of time to paint 1 unit of board

## Algorithm

### Main Function (painterProblem)
```pseudocode
1. If painters > boards, return -1 (invalid case)

2. Calculate search space:
   - start = maximum time for single board
   - end = sum of all times
   - Find sum and max_element in single pass

3. Binary search for minimum time:
   While start <= end:
   a. Calculate mid = start + (end - start)/2
   b. Check if allocation possible with mid as max time
   c. If possible:
      - Update answer = mid
      - Search in left half (end = mid - 1)
   d. If not possible:
      - Search in right half (start = mid + 1)

4. Return answer
```

### Helper Function (isValid)
```pseudocode
1. Initialize:
   - painters = 1
   - current_time = 0

2. For each board:
   a. If board_time > max_allowed_time:
      - Return false
   b. If (current_time + board_time) <= max_allowed_time:
      - Add time to current painter
   c. Else:
      - Increment painter count
      - Reset time to current board
   
3. Return true if required painters <= available painters
```

## Time Complexity
- Binary Search: O(log(sum of times))
- Validation for each mid: O(n)
- Overall: O(n * log(sum of times))

## Space Complexity
- O(1) extra space

## Key Points
- Similar to Book Allocation Problem
- Uses binary search on answer technique
- Ensures contiguous allocation of boards
- Handles edge cases
- Minimizes the maximum time any painter needs to work
