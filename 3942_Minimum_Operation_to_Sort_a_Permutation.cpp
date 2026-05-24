#include <bits/stdc++.h>
using namespace std;

int minOperations(vector<int>& nums) {
        int n = nums.size();
        if(is_sorted(nums.begin(), nums.end())){
            return 0;
        }
        if(is_sorted(nums.rbegin(), nums.rend())){
            return 1;
        }
        int idx;
        for (int i = 0; i < n - 1; ++i) {
            if (nums[i] - nums[i + 1] != 1 && nums[i] - nums[i + 1] != -1) {
                idx = i;
            }
        }
        vector<int> a;
        for (int i = idx + 1; i < n; ++i) {
            a.push_back(nums[i]);
        }
        for (int i = 0; i <= idx; ++i) {
            a.push_back(nums[i]);
        }
        bool inc = true;
        bool dec = true;
        for (int i = 1; i < n; ++i) {
            if (a[i] - a[i - 1] < 0) {
                inc = false;
                break;
            }
        }
        for (int i = 1; i < n; ++i) {
            if (a[i] - a[i - 1] > 0) {
                dec = false;
                break;
            }
        }
        if (dec) {
            return min(idx + 2, n - idx);
        } else if (inc) {
            return min(idx + 1, n - idx + 1);
        } else {
            return -1;
        }
    }

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    cout << minOperations(a) << '\n';
    return 0;
}