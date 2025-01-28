# Single Number

This code implements a solution to find a single number that appears only once in an array where all other numbers appear twice.

## Problem Description
Given an array of integers where every element appears twice except for one element, find that single element.

## Algorithm

### getSingleNumber Function
```pseudocode
1. Initialize:
   - result = 0

2. For each number in array:
   - result = result XOR number

3. Return result
```

## Time Complexity
- O(n) where n is the size of the array
- Single pass through the array

## Space Complexity
- O(1) as it uses only one variable regardless of input size

## Key Points
- Uses XOR operation properties:
  * a XOR a = 0
  * a XOR 0 = a
  * XOR is associative and commutative
- No extra space needed
- Works because:
  * All pairs cancel out (a XOR a = 0)
  * Only unpaired element remains
- Handles any integer values
- Very efficient solution
- No sorting required
- No hash table needed
- Works with negative numbers
- Assumes exactly one element appears once
- All other elements must appear exactly twice
