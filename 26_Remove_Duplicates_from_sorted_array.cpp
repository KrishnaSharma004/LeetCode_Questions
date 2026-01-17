#include <iostream>
#include <vector>
using namespace std;
int removeDuplicates(vector<int>& nums) {
    int check = INT_MIN;
    int k = 0;
    vector<int> ans;
    for(int i=0;i<nums.size();++i){
        if(check != nums[i]){
            check = nums[i];
            k++;
            ans.push_back(nums[i]);
        }
    }
    for(int i=0;i<ans.size();++i){
        nums[i]=ans[i];
    }
    return k;
}
int main(){
    int n;cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;++i){
        cin >> nums[i];
    }

    cout << removeDuplicates(nums) << endl;
    for(auto it : nums){
        cout << it << " ";
    }
    return 0;
}