#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &a, int m, int k, int d){
        int n = a.size();
        int bqt = 0;
        int cnt = 0;
        for(int i = 0 ;i < n ; ++i){
            if(a[i]<= d){
                cnt++;
            }else{
                cnt = 0;
            }
            if(cnt == k){
                bqt++;
                cnt = 0;
            }
        }
        if(bqt >= m) return true;
        return false;
    }
    int minDays(vector<int> &bloomDay, int m, int k) {
        int n = bloomDay.size();
        int lo = 1, hi = *max_element(bloomDay.begin(), bloomDay.end());
        int ans = -1;
        while(hi - lo >= 0){
            int mid = (lo + hi)/ 2;
            if(check(bloomDay,m,k,mid)){
                ans = mid;
                hi = mid - 1;
            }
            else{
                lo = mid + 1;
            }
        }
        return ans;
    }
int main(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    cout << minDays(a, m, k) << '\n';
    return 0;
}