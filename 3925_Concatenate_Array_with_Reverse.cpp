#include <bits/stdc++.h>
using namespace std;

vector<int> concatWithReverse(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2*n);
        int cnt = 1;
        for(int i = 0 ; i < 2*n ; ++i){
            if(i >= n){
                ans[i] = nums[(i-cnt)];
                cnt += 2;
            }else{
                ans[i] = nums[i];
            }
        }
        return ans;
    }

int main(){
    int n;
    cin >> n;
    vector<int> ans(n);
    for(auto &i : ans) cin >> i;
    
    vector<int> res = concatWithReverse(ans);
    for(auto &i : res) cout << i << " ";
    return 0;
}