#include <bits/stdc++.h>
using namespace std;

int minimumIndex(vector<int>& capacity, int itemSize) {
        vector<int> s_array(capacity.begin(), capacity.end());
        sort(s_array.begin(), s_array.end());
        auto it = lower_bound(s_array.begin(), s_array.end(), itemSize);
        if(it == s_array.end()) return -1;
        int target = *it;
        int ans = -1;
        for(int i = 0; i < capacity.size() ; ++i){
            if(capacity[i] == target){
                ans = i;
                break;
            }
        }
        return ans;
    }

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int &i : a) cin >> i;

    cout << minimumIndex(a, k) << '\n';
    return 0;
}