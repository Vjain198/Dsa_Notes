# Palindrome Number

This code implements a solution to check if a given integer is a palindrome number.

## Problem Description
Given an integer, determine whether it reads the same backward as forward. For example, 121 is a palindrome while 123 is not.

## Algorithm

### isPalindrome Function
```pseudocode
1. Handle edge case:
   - If number < 0, return false (negative numbers are not palindromes)

2. Initialize:
   - reversed = 0 (using long long to handle overflow)
   - num = input number (store in long long)

3. While num > 0:
   a. Get last digit: lastDigit = num % 10
   b. Build reversed number: reversed = (reversed * 10) + lastDigit
   c. Remove last digit from num: num = num / 10

4. Return true if reversed equals original number, false otherwise
```

## Time Complexity
- O(log n) where n is the input number
- We process each digit of the number once

## Space Complexity
- O(1) as we only use a constant amount of extra space

## Key Points
- Handles negative numbers (returns false)
- Uses long long to prevent integer overflow
- No string conversion needed
- More efficient than string-based solution
- Handles edge cases:
  * Negative numbers
  * Single digit numbers
  * Numbers ending with 0
- Does not modify the original number
- Works by constructing reverse of number mathematically
