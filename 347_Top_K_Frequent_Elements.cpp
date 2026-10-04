#include <bits/stdc++.h>
using namespace std;

    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        map<int, int> mp;
        for (int i = 0; i < n; ++i) {
            mp[nums[i]]++;
        }
        vector<pair<int, int>> mp2;
        for (auto& i : mp) {
            // cout << i.second << " " << i.first << '\n';
            mp2.push_back({i.second, i.first});
        }
        // cout << "nt" << '\n';
        sort(mp2.rbegin(), mp2.rend());
        // for (auto& i : mp2) {
        //     cout << i.first << " " << i.second << '\n';
        // }
        vector<int> ans;
        int i = 0;
        while (i < k) {
            ans.push_back(mp2[i].second);
            i++;
        }
        return ans;
    }
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> m;
    for(int &i : m)
        cin >> i;

    vector<int> ans = topKFrequent(m, k);
    for(auto &i : ans) cout << i << " ";
    return 0;
}