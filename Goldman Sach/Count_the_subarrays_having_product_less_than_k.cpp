#include<iostream>
#include<vector>

using namespace std;

class Solution{
  public:
     
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int count=0;
        
        int i=0,j=0;
        long long mul=1;
        while(j<n){
            mul*=a[j];
            if(mul>k){
                while(mul>k){
                    mul=mul/a[i];
                    i++;
                }
            }
            if(mul<k){
                count+=(j-i+1);
            }
            j++;
        }
        return count;
    }
};