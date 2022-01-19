// Question

// A top secret message containing letters from A-Z is being encoded to numbers using the following mapping:

// 'A' -> 1
// 'B' -> 2
// ...
// 'Z' -> 26
// You are an FBI agent. You have to determine the total number of ways that message can be decoded, as the answer can be large return the answer modulo 109 + 7.
// Note: An empty digit sequence is considered to have one decoding. It may be assumed that the input contains valid digits from 0 to 9 and If there are leading 0’s, extra trailing 0’s and two or more consecutive 0’s then it is an invalid string.

#include<bits/stdc++.h>

using namespace std;

class Solution{
	public:
	 
		int CountWays(string s){
		    // Code here
		    int n=s.size();
		     long long N=1e9+7;
		    if(s[0]=='0'){
		        return 0;
		    }
		    vector<long long> dp(n+1,0);
		    for(int i=0;i<n-1;i++){
		        if(s[i]=='0' && s[i+1]=='0'){
		            return 0;
		        }
		    }
		  dp[0]=1;
		  
		  for(int i=0;i<n;i++){
		      if(s[i]=='0'){
		          continue;
		      }
		      dp[i+1]=(dp[i+1]+dp[i])%N;
		      if(i!=n-1){
		          if(s[i]=='1' || (s[i]=='2' && s[i+1]<'7')){
		              dp[i+2]=(dp[i+2]+dp[i])%N;
		          }
		      }
		  }
		    
		   // int count=0;
		     return dp[n];
		}
};