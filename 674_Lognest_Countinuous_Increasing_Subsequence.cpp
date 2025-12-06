#include <iostream>
using namespace std;

int findLengthOfLCIS(vector<int>& nums) {
        int maxlength = 1;
        int cur_max = 1;
        for(int i=0;i<nums.size()-1;++i){
            if(nums[i] < nums[i+1]){
                cur_max++;
            }
            else{
                cur_max = 1;
            }
            maxlength = max(maxlength,cur_max);
        }
        return maxlength;
}

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;++i){
        cin >> nums[i];
    }
    int LCIS = findLengthOfLCIS(nums);

    cout << LCIS << endl;
    
    return 0;
}