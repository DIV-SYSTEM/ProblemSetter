## Solution Explanation

A brute-force approach checks all subarrays and computes their cost in O(n²),
which is too slow for large inputs.

### Observation
The cost of a subarray increases only when we extend it to the right, by
adding the absolute difference of the new adjacent pair.

This monotonic behavior allows the use of a sliding window (two pointers).

### Algorithm
- Maintain two pointers `l` and `r`
- Keep track of the current cost
- Expand `r` and add the new cost
- If cost exceeds `K`, move `l` forward and subtract the corresponding cost
- Track the maximum window size

### Complexity
- Time: O(n)
- Space: O(1)
