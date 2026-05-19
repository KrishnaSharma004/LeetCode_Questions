#include <bits/stdc++.h>
using namespace std;

int bs(vector<int>& a, int target) {
        int lo = 0, hi = a.size() - 1;
        while (hi - lo > 0) {
            int mid = (lo + hi) / 2;
            if (a[mid] == target)
                return mid;
            if (a[mid] > target)
                hi = mid;
            else
                lo = mid + 1;
        }
        if (a[lo] >= target)
            return lo;
        else
            return a.size();
    }
    vector<long long> minOperations(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<long long> pf(n);
        pf[0] = nums[0];
        for (int i = 1; i < n; ++i) {
            pf[i] = pf[i - 1] + nums[i];
        }
        int m = queries.size();
        vector<long long> ans;
        for (int i = 0; i < m; ++i) {
            int idx = bs(nums, queries[i]);
            if (idx == 0) {
                long long req = pf[n - 1] - n * (long long)queries[i];
                ans.push_back(req);
            } else {
                long long req = (n - idx) * (long long)queries[i];
                long long sum = pf[n - 1] - pf[idx - 1];
                req = sum - req;
                long long les = (idx)*(long long)queries[i];
                long long sum_les = pf[idx - 1];
                req += les - sum_les;
                ans.push_back(req);
            }
        }
        return ans;
    }
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> nums(n), q(m);
    for(auto &i : nums) cin >> i;
    for(auto &i : q) cin >> i;
    vector<long long> ans = minOperations(nums,q);
    for(auto &i : ans) cout << '\n';
    return 0;
}