// Question 

// Given a string, Your task is to  complete the function encode that returns the run length encoded string for the given string.
// eg if the input string is “wwwwaaadexxxxxx”, then the function should return “w4a3d1e1x6″.
// You are required to complete the function encode that takes only one argument the string which is to be encoded and returns the encoded string.




#include<bits/stdc++.h>
using namespace std;


string encode(string src)
{     
  //Your code here
  int count=1;
  char ch=src[0];
  string ans="";
   for(int i=1;i<src.size();i++){
       if(src[i]==src[i-1]){
           count++;
       }else{
           ans+=src[i-1];
           ans+=to_string(count);
           count=1;
       }
   }
   ans+=src[src.size()-1];
   ans+=to_string(count);
   return ans;
}     
 