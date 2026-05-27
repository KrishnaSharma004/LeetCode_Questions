#include <bits/stdc++.h>
using namespace std;

int minimumSwaps(vector<int>& nums) {
        int n = nums.size();
        int cnt0 = 0;
        for(int i = 0 ; i < n ; ++i){
            if(nums[i] == 0) cnt0++;
        }
        int ops = cnt0;
        for(int i = n - 1 ; i >= n-cnt0 ; i--){
            if(nums[i] == 0) ops--;
        }
        return ops;
    }
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i :a) cin >> i;
    cout << minimumSwaps(a) << '\n';
    return 0;
}