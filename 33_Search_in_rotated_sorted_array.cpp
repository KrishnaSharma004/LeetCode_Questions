#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
        int n = nums.size();
        int lo = 0, hi = n - 1;
        while (hi - lo > 0) {
            int mid = (lo + hi) / 2;
            if (nums[mid] == target)
                return mid;
            if(nums[lo] <= nums[mid]){
                if(target >= nums[lo] && target < nums[mid]){
                    hi = mid - 1;
                }else{
                    lo = mid + 1;
                }
            }else{
                if(target <= nums[hi] && target > nums[mid]){
                    lo = mid + 1;
                }else{
                    hi = mid - 1;
                }
            }
        }
        if (nums[lo] == target)
            return lo;
        else
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