//Question

// Given an unsorted array Arr of size N of positive integers. One number 'A' from set {1, 2, …N} is missing and one number 'B' occurs twice in array. Find these two numbers.
#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> findTwoElement(int arr[], int n) {
        // code here
        vector<int> v(n+1,0),ans;
        
        
        for(int i=0;i<n;i++){
            if(v[arr[i]]==1){
                ans.push_back(arr[i]);
            }
            v[arr[i]]=1;
        }
        
        for(int i=1;i<=n;i++){
            if(v[i]==0){
                ans.push_back(i);
                break;
            }
        }
       return ans;
    }
};