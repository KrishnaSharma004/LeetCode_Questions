#include <iostream>
using namespace std;

int maximizeExpressionOfThree(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(),nums.end());
    return nums[n-1] + nums[n-2] - nums[0];
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i < n; ++i){
        cin >> a[i];
    }

    cout << maximizeExpressionOfThree(a) << '\n';
    
    return 0;
}