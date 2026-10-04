#include <bits/stdc++.h>
using namespace std;

    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prp(n), psp(n);
        prp[0] = nums[0];
        for (int i = 1; i < n; ++i) {
            prp[i] = prp[i - 1] * nums[i];
        }
        psp[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; --i) {
            psp[i] = psp[i + 1] * nums[i];
        }
        vector<int> ans(n);
        ans[0] = psp[1];
        ans[n - 1] = prp[n - 2];
        for (int i = 1; i < n - 1; ++i) {
            ans[i] = prp[i - 1] * psp[i + 1];
        }
        return ans;
    }
int main(){
    int n;
    cin >> n;
    vector<int> m;
    for(int &i : m)
        cin >> i;

    vector<int> ans = productExceptSelf(m);
    for(auto &i : ans) cout << i << " ";
    return 0;
}