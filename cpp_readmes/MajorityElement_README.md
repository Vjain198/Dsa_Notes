# Majority Element (Moore's Voting Algorithm)

This code implements Moore's Voting Algorithm to find the majority element in an array.

## Problem Description
Given an array of integers, find the majority element that appears more than n/2 times in the array, where n is the size of the array.

## Algorithm (Moore's Voting Algorithm)

### getMajorityEle Function
```pseudocode
1. Initialize:
   - frequency = 0
   - answer = 0

2. For each element in array:
   a. If frequency is 0:
      - Set current element as potential answer
   
   b. If current element equals answer:
      - Increment frequency
   
   c. Else:
      - Decrement frequency

3. Return answer
```

## Time Complexity
- O(n) where n is the size of the array
- Single pass through the array

## Space Complexity
- O(1) as it uses only two variables regardless of input size

## Key Points
- Uses Moore's Voting Algorithm
- Works on the principle of cancellation
- Assumes majority element exists in the array
- If verification is needed, a second pass can be added to confirm the majority element
- Very efficient as it requires only one pass and constant extra space
- Works because majority element appears more than n/2 times, so it cannot be completely cancelled by other elements
