// Question

// Due to the rise of covid-19 cases in India, this year BCCI decided to organize knock-out matches in IPL rather than a league.

// Today is matchday 2 and it is between the most loved team Chennai Super Kings and the most underrated team - Punjab Kings. Stephen Fleming, the head coach of CSK, analyzing the batting stats of Punjab. He has stats of runs scored by all N players in the previous season and he wants to find the maximum score for each and every contiguous sub-list of size K to strategize for the game.

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        // your code here
        vector<int> ans;
        int i=0,j=0,maxi=INT_MIN;
        while(j<k){
            if(maxi<arr[j]){
                maxi=arr[j];
            }
            j++;
        }
        ans.push_back(maxi);
        
        i++;
        while(j<arr.size()){
           if(arr[i-1]==maxi){
               int k=i;
               maxi=INT_MIN;
               while(k<=j){
                   if(arr[k]>maxi){
                       maxi=arr[k];
                   }
                   k++;
               }
           }
           if(arr[j]>maxi){
               maxi=arr[j];
           }
           ans.push_back(maxi);
           i++;j++;
        }
        return ans;
    }
};