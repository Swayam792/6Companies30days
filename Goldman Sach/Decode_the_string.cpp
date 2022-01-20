// Question

// An encoded string (s) is given, the task is to decode it. The pattern in which the strings were encoded were as follows
// original string: abbbababbbababbbab 
// encoded string : 3[a3[b]1[ab]]

#include<bits/stdc++.h>

using namespace std;

class Solution{
public:
    string decord(string s,int &i){
        string ans;
        while(i<s.size() && s[i]!=']'){
            if(isdigit(s[i])){
                int num=0;
                while(i<s.size() and isdigit(s[i])){
                    num=num*10+(s[i]-'0');
                    i++;
                }
                i++;
                string st=decord(s,i);
                while(num>0){
                    ans+=st;
                    num--;
                }
                i++;
            }else{
                ans+=s[i];
                i++;
            }
        }
        return ans;
    } 
    string decodedString(string s){
        // code here
         int i=0;
         string ans= decord(s,i);
         return ans;
}
};