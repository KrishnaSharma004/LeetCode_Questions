#include <bits/stdc++.h>
using namespace std;

int func(vector<int> &a, int d){
        int n = a.size();
        int splits = 1;
        int curr_sum = 0;
        for(int i = 0 ; i < n ; ++i){
            if(curr_sum + a[i] <= d){
                curr_sum += a[i];
            }else{
                splits++;
                curr_sum = a[i];
            }
        }
        return splits;
    }
    int splitArray(vector<int>& nums, int k) {
        if(k > nums.size()) return -1;
        long long l = *max_element(nums.begin(), nums.end()), r = accumulate(nums.begin(), nums.end(), 0LL);
        long long ans = r;
        while(l <= r){
            long long mid = l + (r - l)/2;
            if(func(nums, mid) <= k){
                r = mid - 1;
                ans = min(ans, mid);
            }else if(func(nums, mid) > k){
                l = mid + 1;
            }
        }
        return ans;
    }
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    cout << splitArray(a, k) << '\n';
    return 0;
}