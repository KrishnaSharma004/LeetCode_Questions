#include <bits/stdc++.h>
using namespace std;

vector<int> minDistinctFreqPair(vector<int>& nums) {
        int n = nums.size();
        map<int, int> mp;
        for(int i = 0 ; i < n ; ++i){
            mp[nums[i]]++;
        }
        map<int, int> :: iterator it = mp.begin();
        for(it = mp.begin() ; it != mp.end() ; ++it){
            for(auto i = it ; i != mp.end() ; ++i){
                if(it->first != i->first && it->second != i->second){
                    return {it->first, i->first};
                }
            }
        }
        return {-1,-1};
    }
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    vector<int> ans = minDistinctFreqPair(a);
    cout << ans[0] << " " << ans[1] << '\n';
    return 0;
}