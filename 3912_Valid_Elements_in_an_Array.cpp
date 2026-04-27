#include <bits/stdc++.h>
using namespace std;

vector<int> findValidElements(vector<int>& nums) {
        int n = nums.size();
        vector<bool> picked(n, false);
        picked[0] = true;
        picked[n - 1] = true;
        int pr_mx = nums[0];
        for(int i = 1 ; i < n - 1 ; ++i){
            if(nums[i] > pr_mx){
                pr_mx = nums[i];
                picked[i] = true;
            }
        }
        int sf_mx = nums[n - 1];
        for(int i = n - 2 ; i >= 0 ; --i){
            if(nums[i] > sf_mx){
                sf_mx = nums[i];
                picked[i] = true;
            }
        }
        vector<int> ans;
        for(int i = 0 ; i < n ; ++i){
            if(picked[i]) ans.push_back(nums[i]);
        }
        return ans;
    }

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(auto &i : nums) cin >> i;

    vector<int> ans = findValidElements(nums);
    for(auto &i : ans) cout << i << " ";
    return 0;
}