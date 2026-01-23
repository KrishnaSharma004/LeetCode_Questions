#include <iostream>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int mx_s = INT_MIN;
    int sum = 0;

    for(int i=0; i<nums.size(); ++i){
        sum += nums[i];
        mx_s = max(mx_s,sum);
        if(sum < 0) sum = 0;
    }
    return mx_s;
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;++i){
        cin >> a[i];
    }

    cout << maxSubArray(a) << '\n';
    
    return 0;
}