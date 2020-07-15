# cpp-stl-resources-
This repo contains the code through which Rachit Jain explains STL in C++. This will be helpful for revision with step by step approach. Also, it includes codes from the Educative course work.

## Problem Statements
### application_1:
For a set of range of values, in the format [x, y], take it as ([401, 450], [10, 20], [2, 3], [30, 400]), enter a value and check in which of the given range does the value lie.

### reverse_subarray:
Given an array A of N integers. Answer Q queries of the type (l, r) - reverse the subarray A[l...r]. Print the array after each query.

Input format: The first line contains two integers N and Q (1 <= N, Q <= 10^3).
              The second line contains N space-separated integers representing the array A[] (1 <= A[i] <= 10^6)
              Next, Q lines each contains pair of integers l and r (1 ≤ l ≤ r ≤ N).

### merge_sorted_arrays:
Given two sorted arrays, A[] and B[], of sizes N and M respectively, merge them into a single array of size N+M and print the array.

Input format:The first line consists of two space-separated integers N, M (1 <= N, M <= 10^5)
             The second line consists of N space-separated integers representing the array A[] (1 <= A[i] <= 10^5)
             The third line consists of M space-separated integers representing the array B[] (1 <= B[i] <= 10^5)

### Sieve of Eratosthenes:
An efficient algorithm to generate prime numbers between the values 1 to N. Time Complexity is O(N * log(log N)). This algorithm is an efficient alternative, as the standard method (using sqrt(N)) gives the time complexity of O(N * sqrt(N)).
