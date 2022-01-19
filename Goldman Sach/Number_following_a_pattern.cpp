#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    string printMinNumberForPattern(string S){
        // code here 
        stack<int> st;
        string ans="";
        int count=1;
        for(int i=0;i<S.size();i++){
            if(S[i]=='D'){
                st.push(count);
                count++;
            }else{
                st.push(count);
                count++;
                while(!st.empty()){
                    int t=st.top();
                    ans+=to_string(t);
                    st.pop();
                }
            }
        }
        st.push(count);
        while(!st.empty()){
            ans+=to_string(st.top());
            st.pop();
        }
        return ans;
    }
};