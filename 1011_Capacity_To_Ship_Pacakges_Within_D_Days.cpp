#include <bits/stdc++.h>
using namespace std;

bool chk(vector<int> &w, int d, int days){
        int n = w.size();
        int wt = 0;
        int cnt = 0;
        for(int i = 0 ; i < n ;++i){
            bool ok = true;
            if(wt + w[i] > d){
                ok = false;
                wt = w[i];
                cnt++;
            }
            if(wt > d){
                return false;
            }
            if(ok) wt += w[i];
        }
        if(wt <= d) cnt++;
        if(cnt <= days) return true;
        return false;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int sum = 0;
        for(auto &i : weights) sum += i;
        int lo = *max_element(weights.begin(), weights.end()), hi = sum;
        int ans;
        while(hi - lo >= 0){
            int mid = (lo + hi)/2;
            if(chk(weights, mid, days)){
                ans = mid;
                hi = mid - 1;
            }else{
                lo = mid + 1;
            }
        }
        return ans;
    }

int main(){
    int n, days;
    vector<int> a(n);
    for(auto &i :a) cin >> i;
    cout << shipWithinDays(a, days) << '\n';
    return 0;
}