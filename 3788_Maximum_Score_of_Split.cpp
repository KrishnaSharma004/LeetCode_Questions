#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
long long maximumScore(vector<int>& nums) {
    int n = nums.size();
    vector<int> p_sum(n,0);
    for(int i=0;i<n;++i)
        p_sum[i] = nums[i];
    for(int i=1;i<n;++i){
        p_sum[i] = p_sum[i] + p_sum[i-1];
    }
    int suffmin;
    ll maxscore = p_sum[0] - *min_element(nums.begin()+1,nums.end());
    for(int i=1;i<n-1;++i){
        suffmin = *min_element(nums.begin()+i+1,nums.end());
        ll score_i = p_sum[i] - suffmin;
        maxscore = max(score_i,maxscore);
    }
    return maxscore;
}
int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;++i)
        cin >> nums[i];
    
    ll maxs = maximumScore(nums);
    cout << maxs << "\n";
    return 0;
}