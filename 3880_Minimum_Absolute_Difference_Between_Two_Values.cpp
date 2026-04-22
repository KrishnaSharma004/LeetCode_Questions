#include <bits/stdc++.h>
using namespace std;

int minAbsoluteDifference(vector<int>& nums) {
        int n = nums.size();
        int diff = n;
        for(int i = 0 ; i < n ;++i){
            if(nums[i] != 1 && nums[i] != 2) continue;
            if(nums[i] == 1){
                for(int j = i + 1 ; j < n ; ++j){
                    if(nums[j] != 2) continue;
                    diff = min(diff, abs(j - i));
                }
            }else{
                for(int j = i + 1 ; j < n ; ++j){
                    if(nums[j] != 1) continue;
                    diff = min(diff, abs(j - i));
                }
            }
        }
        if(diff == n) return -1;
        else return diff;
    }

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(auto &i : nums) cin >> i;

    cout << minAbsoluteDifference(nums) << '\n';
    return 0;
}