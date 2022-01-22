// Question

// You may recall that an array arr is a mountain array if and only if:

// arr.length >= 3
// There exists some index i (0-indexed) with 0 < i < arr.length - 1 such that:
// arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
// arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
// Given an integer array arr, return the length of the longest subarray, which is a mountain. Return 0 if there is no mountain subarray.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int i=1,n=arr.size(),maxi=0;
        
        while(i<arr.size()-1){
            if(arr[i]>arr[i-1] and arr[i]>arr[i+1]){
                 int j=i; 
                while(j<arr.size()-1 and arr[j]>arr[j+1]){
                    j++;                    
                }
                int k=i-1;
                while(k>=1 and arr[k]>arr[k-1]){
                    k--;                    
                }
                maxi=max(maxi,j-k+1);
            }
            i++;
        }
        
        return maxi;
    }
};