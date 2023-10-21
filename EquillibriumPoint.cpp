class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
          if(n==0)
    return -1;
    if(n==1)
    return 1;
    long long cur_sum=0;
    long long sum=0;
    for(int i=0;i<n;i++){ cur_sum+=a[i];}
    for(int i=0;i<n;i++)
    {
       sum+=a[i];
       if(sum==cur_sum)
       {
               return i+1;
       }
       cur_sum=cur_sum-a[i];
    }
    return -1;
    }

};
