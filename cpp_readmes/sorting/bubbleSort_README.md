# Bubble Sort Algorithm

This code implements the Bubble Sort algorithm with optimization for already sorted arrays.

## Problem Description
Sort an array of integers in ascending order using the Bubble Sort algorithm.

## Algorithm

### bubbleSort Function
```pseudocode
1. For i from n-1 down to 0:
   
   a. Initialize isSwap = 0 (flag for optimization)
   
   b. For j from 0 to i-1:
      - If arr[j] > arr[j+1]:
        * Swap arr[j] and arr[j+1]
        * Set isSwap = 1
   
   c. If isSwap is still 0:
      - Array is sorted
      - Break outer loop

2. Array is sorted
```

## Time Complexity
- Worst and Average case: O(n²)
- Best case (optimized): O(n) when array is already sorted

## Space Complexity
- O(1) as it sorts in-place

## Key Points
- In-place sorting algorithm
- Stable sorting algorithm
- Optimization using isSwap flag
- Best for small arrays
- Simple implementation
- Advantages:
  * Easy to understand
  * Detects sorted array
  * Stable sort
- Disadvantages:
  * Poor performance on large arrays
  * Quadratic time complexity
- Named for larger elements "bubbling up"
- Good for educational purposes
- Adaptive (optimized version)
- No extra space needed
- Performs well when array is nearly sorted
