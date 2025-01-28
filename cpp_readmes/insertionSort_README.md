# Insertion Sort Algorithm

This code implements the Insertion Sort algorithm, which builds the final sorted array one item at a time.

## Problem Description
Sort an array of integers in ascending order using the Insertion Sort algorithm.

## Algorithm

### insertionSort Function
```pseudocode
1. For i from 0 to n-1:
   
   a. Set j = i
   
   b. While j > 0 AND arr[j-1] > arr[j]:
      - Swap arr[j] and arr[j-1]
      - Decrement j

   c. Element is now inserted in correct position
```

## Time Complexity
- Worst and Average case: O(n²)
- Best case: O(n) when array is already sorted

## Space Complexity
- O(1) as it sorts in-place

## Key Points
- In-place sorting algorithm
- Stable sorting algorithm
- Adaptive algorithm
- Advantages:
  * Simple implementation
  * Efficient for small data sets
  * Adaptive (runs faster on nearly sorted arrays)
  * Stable sort
  * Online (can sort as data arrives)
- Disadvantages:
  * Quadratic time complexity
  * Not suitable for large datasets
- Use cases:
  * Small arrays
  * Nearly sorted arrays
  * Online sorting
  * When stability is required
- Works similarly to sorting playing cards
- Maintains sorted portion on left side
- Good for continuous sorted insertion
- Better than Selection and Bubble Sort for small arrays
- Used in hybrid sorting algorithms (like Timsort)
