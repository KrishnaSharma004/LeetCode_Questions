#include <bits/stdc++.h>
using namespace std;

    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        vector<pair<int, int> > vp;
        for(int i = 0; i < nums.size() ; ++i){
            vp.push_back({nums[i], i});
        }
        sort(vp.begin(), vp.end());
        for(int i = 0 ; i < nums.size()-1 ; ++i){
            if(vp[i].first == vp[i+1].first){
                if(abs(vp[i].second - vp[i+1].second) <= k) return true;
            }
        }
        return false;
    }
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> m;
    for(int &i : m)
        cin >> i;

    cout << containsNearbyDuplicate(m, k) << '\n';
    return 0;
}