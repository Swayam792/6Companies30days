// Question

// Given an array of integers and a number k, write a function that returns true if given array can be divided into pairs such that sum of every pair is divisible by k.
#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        if(nums.size()%2){
            return false;
        }
        unordered_map<int,int> m;
        int count=0;
        for(int i=0;i<nums.size();i++){
            int r=nums[i]%k;
            int p;
            if(r==0){
                p=0;
            }else{
                p=k-r;
            }
            
            if(m[p]){
                count+=2;
                m[p]--;
            }else{
                m[r]++;
            }
        }       
        if(count==nums.size()){
            return true;
        }
       
        return  false;
    }
};