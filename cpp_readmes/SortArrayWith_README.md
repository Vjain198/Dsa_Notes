# Sort Array With Three Numbers (Dutch National Flag Algorithm)

This code implements the Dutch National Flag algorithm to sort an array containing only 0s, 1s, and 2s.

## Problem Description
Given an array containing only 0s, 1s, and 2s, sort the array in ascending order in a single pass.

## Algorithm

### sortArray Function
```pseudocode
1. Initialize three pointers:
   - low = 0 (boundary for 0s)
   - mid = 0 (current element)
   - high = array_size - 1 (boundary for 2s)

2. While mid <= high:
   a. If nums[mid] == 0:
      - Swap nums[low] and nums[mid]
      - Increment low
      - Increment mid
   
   b. If nums[mid] == 1:
      - Increment mid
   
   c. If nums[mid] == 2:
      - Swap nums[high] and nums[mid]
      - Decrement high

3. Array is sorted when mid crosses high
```

## Time Complexity
- O(n) where n is the size of the array
- Single pass through the array

## Space Complexity
- O(1) as it sorts in-place

## Key Points
- Uses Dutch National Flag algorithm
- Single pass solution
- In-place sorting
- Three-way partitioning
- Handles duplicates efficiently
- No counting or extra array needed
- Maintains relative order of same elements
- Works best when:
  * Array contains many duplicates
  * Only three distinct values
- Common interview problem
- Also known as Sort Colors problem
- Can be modified for other three-way partitioning needs
