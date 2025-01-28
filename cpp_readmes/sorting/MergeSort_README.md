# Merge Sort Algorithm

This code implements the Merge Sort algorithm, a divide-and-conquer sorting algorithm.

## Problem Description
Sort an array of integers in ascending order using the Merge Sort algorithm.

## Algorithm

### Main Function (ms - Merge Sort)
```pseudocode
1. Base case:
   - If low == high (single element), return

2. Recursive case:
   a. Calculate mid = (low + high) / 2
   b. Recursively sort left half: ms(arr, low, mid)
   c. Recursively sort right half: ms(arr, mid+1, high)
   d. Merge the sorted halves: merge(arr, low, mid, high)
```

### Merge Function
```pseudocode
1. Create temporary array temp

2. Initialize pointers:
   - left = low
   - right = mid + 1

3. While both halves have elements:
   - Compare elements at left and right
   - Add smaller element to temp
   - Increment corresponding pointer

4. Copy remaining elements from left half:
   - While left <= mid:
     * Add element to temp
     * Increment left

5. Copy remaining elements from right half:
   - While right <= high:
     * Add element to temp
     * Increment right

6. Copy elements from temp back to original array:
   - For i from low to high:
     * arr[i] = temp[i - low]
```

## Time Complexity
- Overall: O(n log n)
  - Dividing: O(log n) levels
  - Merging: O(n) at each level

## Space Complexity
- O(n) for temporary array in merge function

## Key Points
- Stable sorting algorithm
- Divide-and-conquer approach
- Guaranteed O(n log n) time complexity
- Requires extra space
- Good for sorting linked lists
- Parallelizable
- Not in-place sorting
