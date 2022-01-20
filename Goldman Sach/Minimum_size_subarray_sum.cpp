// Question

// Given an array of positive integers nums and a positive integer target, return the minimal length of a contiguous subarray [numsl, numsl+1, ..., numsr-1, numsr] of which the sum is greater than or equal to target. If there is no such subarray, return 0 instead.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0;
        int mini=INT_MAX;int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(sum<target){
            return 0;
        }
        sum=0;
        while(j<nums.size()){
            sum+=nums[j];
            if(sum>=target){                   
                while(i<=j and sum>=target){
                    sum-=nums[i];
                    mini=min(mini,j-i+1);
                    i++;
                }
            } 
            j++;
        }
        return mini;
    }
};