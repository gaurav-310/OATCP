## Berse ball
Declare a 2D array dp to store subproblem results, initialized with -1.
Declare arrays a and b to store input sequences.
Declare variables n and m for the sizes of sequences a and b.
Define a function fn(i, j) to find the length of the longest common subsequence from indices i and j.
If either i >= n or j >= m, return 0.
If dp[i][j] is calculated, return it.
Initialize o1, o2, and o3 to store lengths of subsequences with different scenarios.
o1: Length of the subsequence if elements of a and b can be included (if |a[i] - b[j]| ≤ 1).
o2: Length of subsequence starting from the next element of sequence a.
o3: Length of subsequence starting from the next element of sequence b.
Return dp[i][j] = max(o1, o2, o3).
In main function, initialize dp array with -1 using memset.
Read inputs for n, m, a, and b.
Sort sequences a and b in ascending order.
Print the result obtained from fn(0, 0), which gives the length of the longest common subsequence.