#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

    int dp[205][20005];
    bool func(int i,int sum,vector<int> &nums){
        //base case : 
        if(sum == 0) return true;
        if(i < 0) return false;

        if(dp[i][sum] != -1) return dp[i][sum];

        //way 1: do not consider ith element 
        int isPossible = func(i-1,sum,nums);
        //way 2: consider ith element 
        if(sum - nums[i] >= 0)
            isPossible |= func(i-1,sum - nums[i], nums);
        
        return dp[i][sum] = isPossible;
    }
    bool canPartition(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        int sum = accumulate(nums.begin(),nums.end(),0);
        if(sum % 2 != 0) return false;
        sum /=2;

        return func(nums.size()-1,sum,nums);
    }
int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;++i)
        cin >> nums[i];

    string ans = canPartition(nums) ? "true" : "false";
    cout << ans << '\n';
    
    return 0;
}