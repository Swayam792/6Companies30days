// Question

// For two strings s and t, we say "t divides s" if and only if s = t + ... + t (i.e., t is concatenated with itself one or more times).

// Given two strings str1 and str2, return the largest string x such that x divides both str1 and str2.

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string ans="";
        int i=0,j=0;bool f=false;
        while(i<str1.size() and j<str2.size()){
            if(str1[i]!=str2[j]){
                f=true;
                break;
            }             
            i++;j++;
            if(i==str1.size() and str1.size()<str2.size()){
                i=0;
            }
            if(j==str2.size() and  str1.size()>str2.size()){
                j=0;
            }
        }
        if(f){
            return "";
        }else{
           int len=__gcd(str1.size(),str2.size());
           for(int i=0;i<len;i++){
               ans+=str1[i];
           }
        }
        return ans;
    }
};