# Map Hashing (Frequency Counter)

This code implements a frequency counter using C++ STL map to count occurrences of elements and handle queries efficiently.

## Problem Description
Given an array of integers and a set of queries, for each query find the frequency of a given number in the array.

## Algorithm

### Main Function
```pseudocode
1. Input:
   - Read array size n
   - Create vector arr of size n
   - Create empty map mpp

2. Build Frequency Map:
   For i from 0 to n-1:
   - Read array element arr[i]
   - Increment frequency: mpp[arr[i]]++

3. Handle Queries:
   - Read number of queries q
   For each query:
   - Read query number
   - Print frequency from map: mpp[number]
```

## Time Complexity
- Building frequency map: O(n log n) where n is array size
  * Each map insertion takes O(log n)
- Query processing: O(q log n) where q is number of queries
  * Each map lookup takes O(log n)

## Space Complexity
- O(n) where n is the number of unique elements in array
- Map stores at most one entry per unique element

## Key Points
- Uses STL map (Red-Black Tree implementation)
- Advantages:
  * Automatic frequency counting
  * Fast lookups O(log n)
  * Ordered storage
- Applications:
  * Frequency counting
  * Element tracking
  * Statistical analysis
- Features:
  * Handles multiple queries efficiently
  * No need to sort or search array repeatedly
  * Works with any integer values
- Alternative approaches:
  * Unordered_map for O(1) average case lookups
  * Array-based counting for small range of values
  * Vector of pairs for manual counting
