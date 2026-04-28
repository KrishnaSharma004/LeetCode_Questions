#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MAX;
        int lo = 0, hi = n -1;
        while(lo <= hi){
            int mid = (lo + hi)/2;
            if(nums[lo] <= nums[mid]){//left part is sorted 
                ans = min(ans, nums[lo]);
                lo = mid + 1;
            }else{//right part is sorted 
                ans = min(ans, nums[mid]);
                hi = mid - 1;
            }
        }
        return ans;
    }

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(auto &i : nums) cin >> i;

    cout << findMin(nums) << '\n';
    return 0;
}