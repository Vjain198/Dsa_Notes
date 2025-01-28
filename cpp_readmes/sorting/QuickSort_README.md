# Quick Sort Algorithm

This code implements the Quick Sort algorithm, a divide-and-conquer sorting algorithm.

## Problem Description
Sort an array of integers in ascending order using the Quick Sort algorithm.

## Algorithm

### Main Function (qs - Quick Sort)
```pseudocode
1. Base case:
   - If low >= high, return

2. Recursive case:
   a. Get partition index: pIndex = partition(arr, low, high)
   b. Recursively sort left subarray: qs(arr, low, pIndex-1)
   c. Recursively sort right subarray: qs(arr, pIndex+1, high)
```

### Partition Function
```pseudocode
1. Initialize:
   - pivot = arr[low]
   - i = low (left pointer)
   - j = high (right pointer)

2. While i < j:
   a. Move i right while arr[i] <= pivot:
      - Increment i while arr[i] <= pivot and i <= high-1
   
   b. Move j left while arr[j] > pivot:
      - Decrement j while arr[j] > pivot and j >= low+1
   
   c. If i < j:
      - Swap arr[i] and arr[j]

3. Swap arr[low] with arr[j] (place pivot in correct position)
4. Return j (partition index)
```

## Time Complexity
- Average case: O(n log n)
- Worst case: O(n²) when array is already sorted
- Best case: O(n log n)

## Space Complexity
- O(log n) for recursive call stack
- O(1) auxiliary space for partitioning

## Key Points
- In-place sorting algorithm
- Not stable sorting algorithm
- Efficient for large datasets
- Partition strategy affects performance
- Uses divide-and-conquer approach
- Performance depends on pivot selection
- Works well with cache memory
- Recursive implementation
- Can be optimized by:
  * Random pivot selection
  * Three-way partitioning for duplicate elements
  * Using insertion sort for small subarrays
