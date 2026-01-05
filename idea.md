## Initial Concept
The initial idea was to create a subarray problem where validity depends on a
cumulative metric rather than a single maximum or minimum value.

## Rejected Variants
Variants based solely on max-min constraints were rejected as they resemble
well-known sliding window problems.

## Final Formulation
The final problem defines the cost of a subarray as the sum of absolute
differences between adjacent elements. This cost dynamically increases as
the window expands, requiring careful two-pointer management.

The formulation is simple to state but non-trivial to optimize, making it
suitable for Div1/Div2 difficulty.
