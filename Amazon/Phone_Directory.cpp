// Question

// Given a list of contacts contact[] of length n where each contact is a string which exist in a phone directory and a query string s. The task is to implement a search query for the phone directory. Run a search query for each prefix p of the query string s (i.e. from  index 1 to |s|) that prints all the distinct contacts which have the same prefix as p in lexicographical increasing order. Please refer the explanation part for better understanding.
// Note: If there is no match between query and contacts, print "0".


#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        // code here
        vector<vector<string>> ans;
        string t="";
        for(int i=0;i<s.size();i++){
            t+=s[i];
            vector<string> v;
            set<string> st;
            for(int j=0;j<n;j++){
                int getornot=contact[j].find(t);
                if(getornot==0){
                    st.insert(contact[j]);
                }
            }
            
            if(st.size()!=0){
                for(auto x:st){
                    v.push_back(x);
                }
                
            }else{
                v.push_back("0");
               
            }
             ans.push_back(v); 
        }
        return ans;
        
    }
};