# Maximum Subarray Sum (Kadane's Algorithm)

This code implements Kadane's Algorithm to find the contiguous subarray with the largest sum.

## Problem Description
Given an array of integers, find the contiguous subarray with the largest sum and return the sum.

## Algorithm

### maxSubArraySum Function (Kadane's Algorithm)
```pseudocode
1. Initialize:
   - currentSum = 0
   - maxSum = INT_MIN

2. For each element in array:
   a. Add current element to currentSum
   
   b. Update maxSum if currentSum is larger
   
   c. If currentSum becomes negative:
      - Reset currentSum to 0
      (Start fresh from next element)

3. Return maxSum
```

## Time Complexity
- O(n) where n is the size of the array
- Single pass through the array

## Space Complexity
- O(1) as it uses only two variables

## Key Points
- Uses Kadane's Algorithm
- Handles negative numbers
- Handles all negative array
- Key insights:
  * Any subarray with negative sum is discarded
  * Keeps track of maximum sum seen so far
  * Efficiently handles:
    - All positive numbers
    - All negative numbers
    - Mixed positive and negative
- Applications:
  * Stock market analysis
  * Time series data
  * Signal processing
- Variations:
  * Can be modified to return subarray indices
  * Can handle circular arrays
  * Can find minimum sum subarray
- More efficient than brute force O(n²)
- Dynamic Programming approach
- Optimal solution for this problem
