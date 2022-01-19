// question

// M items are to be delivered in a circle of size N. Find the position where the M-th item will be delivered if we start from a given position K. Note that items are distributed at adjacent positions starting from K.

#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int findPosition(int N , int M , int K) {
        // code here
        M=M%N;
        int ans=(M+K-1)%N;
        if(ans==0){
            return N;
        }
        return ans;
    }
};