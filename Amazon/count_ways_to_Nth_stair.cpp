// Question

// There are N stairs, and a person standing at the bottom wants to reach the top. The person can climb either 1 stair or 2 stairs at a time. Count the number of ways, the person can reach the top (order does not matter).
// Note: Order does not matter means for n=4 {1 2 1},{2 1 1},{1 1 2} are considered same.

class Solution
{
    public:
     
    int count(int m){
        if(m==0 || m==1){
            return 1;
        }
        
        if(m<0){
            return 0;
        }
        return 1+count(m-2);
    }
    long long countWays(int m)
    {
        
        int ans=count(m);
        return ans;
    }
};