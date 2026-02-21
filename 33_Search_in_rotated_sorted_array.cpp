#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target){
    int l = 0, hi = nums.size() - 1;
    while(l <= hi){
        int mid = (l + hi) / 2;
        if(nums[mid] == target) return mid;

        if(nums[l] <= nums[mid]){
            if(nums[l] <= target && target <= nums[mid]){
                hi = mid - 1;
            }else {
                l = mid + 1;
            }
        }else{
            if(nums[mid] <= target && target <= nums[hi]){
                l = mid + 1;
            }else{
                hi = mid - 1;
            }
        }
    }
    return -1;
}

int main(){
    int n, t;
    cin >> n >> t;
    vector<int> nm(n);
    for(int i = 0; i < n ; ++i){
        cin >> nm[i];
    }

    cout << search(nm, t) << '\n';
    return 0;
}