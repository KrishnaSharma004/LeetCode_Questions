#include <iostream>
using namespace std;
vector<int> runningSum(vector<int>& nums) {
    int n = nums.size();
    vector<int> rn_sum(n);
    rn_sum[0] = nums[0];
    for(int i=1;i<n;++i){
        rn_sum[i] = rn_sum[i-1] + nums[i];
    }
    return rn_sum;
}

int main(){
    int n;
    cin >> n;
    
    vector<int> nums(n);
    for(int i=0;i<n;++i)
        cin >> nums[i];

    vector<int> ans = runningSum(nums);

    for(int x : ans)
        cout << x << " ";
        
}