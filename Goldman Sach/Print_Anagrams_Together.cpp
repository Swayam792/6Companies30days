#include<bits/stdc++.h>

using namespace std;

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> m;
        
        for(auto x:string_list){
            string st=x;
            sort(st.begin(),st.end());
            m[st].push_back(x);
        }
        
        for(auto x:m){
            ans.push_back(x.second);
        }
         
        return ans;
    }
};
