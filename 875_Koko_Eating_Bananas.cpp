#include <bits/stdc++.h>
using namespace std;

int maxElement(vector<int> &piles){
        int n = piles.size();
        int m_ele = piles[0];
        for(int i = 0 ; i < n ; ++i){
            m_ele = max(piles[i], m_ele);
        }
        return m_ele;
    }
    bool check(vector<int> &piles, int k, int h){
        int n = piles.size();
        long long cnt = 0;
        for(int i = 0; i < n ; ++i){
            if(piles[i] < k) cnt++;
            else{
                if(piles[i]%k == 0){
                    cnt += piles[i]/k;
                }else{
                    cnt += piles[i]/k + 1;
                }
            }
        }
        if(cnt > h) return false;
        return true;
    }
    int minEatingSpeed(vector<int> &piles, int h) {
        int lo = 1, hi = maxElement(piles);
        int ans;
        while(hi - lo >= 0){
            int mid = (lo+hi)/2;
            if(check(piles,mid,h)){
                ans = mid;
                hi = mid - 1;
            }else{
                lo = mid + 1;
            }
        }
        return ans;
    }
int main(){
    int n, h;
    cin >> n >> h;
    vector<int> piles(n);
    for(auto &i : piles) cin >> i;
    cout << minEatingSpeed(piles, h) << '\n';
    return 0;
}