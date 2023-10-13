#include <bits/stdc++.h>
using namespace std;

class Solution{
    //Function to find the leaders in the array.
    public:

       vector<int> leaders(int a[], int n){
       // Code here
       vector<int> v;
       
       v.push_back(a[n-1]); // Always a leader
       
       int greater = a[n-1];
       for(int i = n-2; i >= 0; i--){
           greater = max(greater, a[i]);
           
           if(a[i] >= greater){
               v.push_back(a[i]);
           }
       }
       reverse(v.begin(), v.end());
       return v;
   }
};