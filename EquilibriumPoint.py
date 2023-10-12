'''
Given an array A of n positive numbers. 
The task is to find the first equilibrium point in an array. 
Equilibrium point in an array is an index (or position) such 
that the sum of all elements before that index is same as sum of elements after it.

Note: Return equilibrium point in 1-based indexing. Return -1 if no such point exists. 
'''
 # Solution
def equilibriumPoint(self,A, N):
    total_sum = sum(A)
    left_sum = 0

    for i in range(N):
        total_sum -= A[i]  # Subtract the current element from the total sum
        if left_sum == total_sum:
            return i + 1
        left_sum += A[i]

    return -1