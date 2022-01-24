// Question

// Given an input stream of A of n characters consisting only of lower case alphabets. The task is to find the first non repeating character, each time a character is inserted to the stream. If there is no such character then append '#' to the answer.

#include<bits/stdc++.h>
using namespace std;

class Solution{
    	public:
		string FirstNonRepeating(string A){
		    // Code here
		    vector<int> hash(26,0);
		    string ans="";
		    deque<char> dq;
		    for(int i=0;i<A.size();i++){
		        int pos=A[i]-'a';
		        if(hash[pos]==0){
		            dq.push_back(A[i]);
		        }
		        hash[pos]++;
		        while(!dq.empty() and hash[dq.front()-'a']!=1){
		            dq.pop_front();
		        }
		        if(dq.empty()) {
		                ans+="#";
		        }else{
		                ans+=dq.front();
		        }  
		    }
		     
		    return ans;
		}

};