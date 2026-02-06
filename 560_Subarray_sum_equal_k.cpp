#include <iostream>
#include <map>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    int n = nums.size();
    map<int, int> mp;
    mp[0] = 1;
    int psum = 0, cnt = 0;

    for(int i = 0 ; i < n ; ++i){
        psum += nums[i];
        int rm = psum - k;
        cnt += mp[rm];
        mp[psum] += 1;
    }
    return cnt;
}

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    for(int i = 0; i < n ; ++i) cin >> a[i];

    cout << subarraySum(a,k) << '\n';

    return 0;
}