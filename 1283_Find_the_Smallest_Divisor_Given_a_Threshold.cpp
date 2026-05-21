#include <bits/stdc++.h>
using namespace std;

long long chk(int d, vector<int> &a, int t){
        int n = a.size();
        long long v = 0;
        for(int i = 0 ; i < n ; ++i){
            v += ceil((a[i]*1.0)/d);
        }
        return v;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int lo = 1, hi = *max_element(nums.begin(), nums.end());
        int ans;
        while(hi - lo >= 0){
            int mid = lo + (hi - lo)/2;//overflow case 
            if(chk(mid,nums,threshold) <= threshold){
                ans = mid;
                hi = mid - 1;
            }else lo = mid + 1;
        }
        return ans;
    }
int main(){
    int n, threshold;
    cin >> n >> threshold;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    cout << smallestDivisor(a, threshold) << '\n';
    return 0;
}