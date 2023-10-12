class Solution
{
public:
    // arr: input array
    // n: size of array
    // Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n)
    {

        // Your code here
        int localSum = arr[0];
        int globalSum = arr[0];

        for (int i = 1; i < n; i++)
        {
            localSum = max(localSum + arr[i], arr[i]);
            globalSum = max(localSum, globalSum);
        }

        return globalSum;
    }
};