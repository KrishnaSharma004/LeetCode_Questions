#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define f first
#define s second 
#define pb push_back
typedef long long ll;
vector<long long> distance(vector<int>& nums) {
    int n = nums.size();
    vector<pair<int, int> > a;
    for(int i = 0 ; i < n ; ++i){
        a.pb({nums[i], i});
    }
    sort(all(a));
    // for(auto &i : a){
    //     cout << i.f << " " << i.s << '\n';
    // }
    // cout << '\n';
    vector<long long> ans(n);
    int i = 0;
    while (i < n) {
        int j = i;
        while (j < n && a[j].first == a[i].first) j++;

        long long prefSum = 0;
        for (int k = i; k < j; k++) prefSum += a[k].second;

        long long leftSum = 0;
        for (int k = i; k < j; k++) {
            int groupSize = j - i;
            int posInGroup = k - i;
            prefSum -= a[k].second;

            ans[a[k].second] = (long long)posInGroup * a[k].second - leftSum
                             + prefSum - (long long)(groupSize - posInGroup - 1) * a[k].second;
            leftSum += a[k].second;
        }
        i = j;
    }
    return ans;
}

void solve(){
    int n; cin >> n;
    vector<int> a(n); 
    for(auto &i : a) cin >> i;

    vector<ll> ans = distance(a);
    
    for(auto &i : ans) cout << i << " ";
    cout << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}