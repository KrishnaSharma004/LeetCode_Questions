#include <bits/stdc++.h>
using namespace std;

int digitSum(int nums){
        int sum = 0;
        while(nums){
            int l = nums%10;
            sum+=l;
            nums /= 10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        int ans = INT_MAX;
        for(int i = 0 ; i < nums.size() ; ++i){
            ans = min(digitSum(nums[i]), ans);
        }
        return ans;
    }
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    cout << minElement(a) << '\n';
    return 0;
}