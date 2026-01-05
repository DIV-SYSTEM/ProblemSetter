## Problem: Smooth Segment

You are given an integer array `a` of length `n` and an integer `K`.

Define the cost of a subarray `[l, r]` as:

|a[l+1] − a[l]| + |a[l+2] − a[l+1]| + ... + |a[r] − a[r−1]|

Your task is to find the maximum possible length of a subarray whose cost
does not exceed `K`.

### Input
- First line: two integers `n` and `K` (1 ≤ n ≤ 2⋅10⁵)
- Second line: `n` integers `a[i]` (−10⁹ ≤ a[i] ≤ 10⁹)

### Output
- Print a single integer — the maximum length.

### Example
Input:
5 3
1 2 3 4 5

Output:
4

### Explanation
The subarray `[1,2,3,4]` has cost `3`, which is within the limit.

