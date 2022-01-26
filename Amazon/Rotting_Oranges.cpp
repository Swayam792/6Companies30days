// Question

// You are given an m x n grid where each cell can have one of three values:

// 0 representing an empty cell,
// 1 representing a fresh orange, or
// 2 representing a rotten orange.
// Every minute, any fresh orange that is 4-directionally adjacent to a rotten orange becomes rotten.

// Return the minimum number of minutes that must elapse until no cell has a fresh orange. If this is impossible, return -1.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int cnt=0,cnt_fresh=0;
        int m=grid.size(),n=grid[0].size();
        
        queue<pair<int,int>> q;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==2){
                    q.push({i,j});  
                    cnt--;
                } 
                else if(grid[i][j]==1){
                    cnt_fresh++;
                } 
            }
        }
        
        if(cnt_fresh==0)return 0;
        
        int dirx[4]={1,-1,0,0};
        int diry[4]={0,0,1,-1};
        int minute=0;
        while(!q.empty()){
            int size=q.size();
            cnt+=size;
            for(int i=0;i<size;i++){
                int xx=q.front().first;
                int yy=q.front().second;
                q.pop();
                
                for(int j=0;j<4;j++){
                    int xi=dirx[j]+xx,yi=diry[j]+yy;
                    if(xi<0 || xi>=m || yi<0 || yi>=n || grid[xi][yi]==0 || grid[xi][yi]==2){
                        continue;
                    }
                    grid[xi][yi]=2;
                    q.push({xi,yi});
                }
            }
            if(q.size()!=0){
                minute++;
            }
        }
       return cnt_fresh==cnt?minute:-1; 
    }
};