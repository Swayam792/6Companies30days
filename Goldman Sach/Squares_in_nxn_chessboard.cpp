// Question

// Find total number of Squares in a N*N cheesboard.

#include<bits/stdc++.h>

using namespace std;

class Solution {
  public:
    long long squaresInChessBoard(long long n) {
        // code here
        long long N=1e18+7;
        long long ans= 0;
        for(int i=n;i>=1;i--){
            ans=(ans)%N+((i)%N*(i)%N)%N;
        }
        return ans%N;
    }
};