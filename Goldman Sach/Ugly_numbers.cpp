// Question

// Ugly numbers are numbers whose only prime factors are 2, 3 or 5. The sequence 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, … shows the first 11 ugly numbers. By convention, 1 is included. Write a program to find Nth Ugly Number.

#include<bits/stdc++.h>

using namespace std;


class Solution{
public:	
	 
	unsigned long long getNthUglyNo(int n) {
	    // code here
	    long long c2=0,c3=0,c5=0;
	    vector<long long> dp(n+1,0);
	    dp[0]=1;
	    for(int i=1;i<=n;i++){
	        long long i2=2*dp[c2];
	        long long i3=3*dp[c3];
	        long long i5=5*dp[c5];
	        dp[i]=min({i2,i3,i5});
	        if(dp[i]==i2){
	            c2++;
	        }
	        if(dp[i]==i3){
	            c3++;
	        }
	        if(dp[i]==i5){
	            c5++;
	        }
	        
	    }
	    return dp[n-1];
	}
};