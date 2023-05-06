class Solution{
    public:
     int solve(int cur,int cc,vector<int>coin,vector<vector<int>>&dp){
        if(dp[cc][cur]!=-1)return dp[cc][cur];
        if(cur==0&&cc==0)return 1;
        if(cc==0||cur==0)return 0;
        for(auto i:coin){
            if(cur-i>=0){
                if(solve(cur-i,cc-1,coin,dp))return dp[cc][cur]= 1;
            }
        }
        return dp[cc][cur]=0;
    }
    bool makeChanges(int n, int k, int target, vector<int> &coins) {
        vector<vector<int>>dp(k+1,vector<int>(target+1,-1));
        return solve(target,k,coins,dp);
    }
}