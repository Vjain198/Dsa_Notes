# Container With Most Water

This code solves the Container With Most Water problem using the two-pointer technique.

## Problem Description
Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water the container can trap between two vertical lines.

## Algorithm

### maxWater Function
```pseudocode
1. Initialize:
   - left_pointer = 0
   - right_pointer = array_size - 1
   - max_water = 0

2. While left_pointer < right_pointer:
   a. Calculate:
      - width = right_pointer - left_pointer
      - height = min(arr[left_pointer], arr[right_pointer])
      - current_water = width * height
   
   b. Update max_water if current_water is larger

   c. Move pointers:
      - If height at left_pointer is smaller:
        * Increment left_pointer
      - Else:
        * Decrement right_pointer

3. Return max_water
```

## Time Complexity
- O(n) where n is the size of the array
- Single pass through the array using two pointers

## Space Complexity
- O(1) as it uses only constant extra space

## Key Points
- Uses two-pointer technique
- Optimally finds maximum area without checking all possible combinations
- Area is calculated as: width * minimum height of two boundaries
- Moves the pointer with smaller height inward to try to find a larger area
