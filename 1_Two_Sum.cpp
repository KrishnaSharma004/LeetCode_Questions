#include <iostream>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans(2);
        for(int i =0;i<n-1;++i)
            for(int j=i+1;j<n;++j){
                if(nums[i] + nums[j] == target){
                    ans[0] = i;
                    ans[1] = j; 
                }
            }
        return ans;
    }

int main(){
    int n,target;
    cin >> n >> target;

    vector<int> nums(n);
    for(int i=0;i<n;++i)
        cin >> nums[i];

    vector<int> ans = twoSum(nums,target);

    cout << ans[0] << " " << ans[1] << '\n';
     
    return 0;
}