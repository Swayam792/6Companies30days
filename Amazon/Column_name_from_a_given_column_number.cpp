// Question

// Given a positive integer, return its corresponding column title as appear in an Excel sheet.
// Excel columns has a pattern like A, B, C, … ,Z, AA, AB, AC,…. ,AZ, BA, BB, … ZZ, AAA, AAB ….. etc. In other words, column 1 is named as “A”, column 2 as “B”, column 27 as “AA” and so on.

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    string colName (long long int n)
    {
        // your code here
         string ans="";
         while(n>0){
             char ch='A'+(n-1)%26;
             ans=ch+ans;
             n=(n-1)/26;
         }
         //reverse(ans.begin(),ans.end());
         return ans;
    }
};