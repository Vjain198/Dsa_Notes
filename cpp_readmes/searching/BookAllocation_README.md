# Book Allocation Problem

This code implements a solution to the Book Allocation Problem using binary search approach.

## Problem Description
Given an array representing pages in N books and M students, find the minimum possible maximum number of pages allocated to a student such that:
- Each student gets at least one book
- All books must be allocated
- Books must be allocated in a contiguous manner
- Minimize the maximum number of pages assigned to a student

## Algorithm

### Main Function (bookAllocation)
```pseudocode
1. If students > books, return -1 (invalid case)

2. Calculate search space:
   - start = maximum pages in a single book
   - end = sum of all pages

3. While start <= end:
   a. Calculate mid = start + (end - start)/2
   b. Check if allocation is possible with mid as maximum pages
   c. If possible:
      - Update answer = mid
      - Search in left half (end = mid - 1)
   d. If not possible:
      - Search in right half (start = mid + 1)

4. Return answer
```

### Helper Function (isValid)
```pseudocode
1. Initialize:
   - current_student = 1
   - pages_sum = 0

2. For each book:
   a. If book pages > max_allowed_pages:
      - Return false
   b. If (current_pages + book_pages) <= max_allowed_pages:
      - Add pages to current student
   c. Else:
      - Increment student count
      - Assign book to new student
   
3. Return true if required students <= available students
```

## Time Complexity
- Binary Search: O(log(sum of pages))
- For each binary search step: O(n) to check validity
- Overall: O(n * log(sum of pages))

## Space Complexity
- O(1) extra space

## Key Points
- Uses binary search on answer technique
- Handles edge cases (more students than books)
- Ensures contiguous allocation of books
- Minimizes the maximum load on any student
