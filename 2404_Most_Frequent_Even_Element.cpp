#include <iostream>
#include <map>
using namespace std;
int mostFrequentEven(vector<int>& nums) {
        int hs[1000005];
        bool check = false;
        int n = nums.size();
        for(int i=0;i<n;++i){
            if(!(nums[i]&1)){
                check = true;
                hs[nums[i]]++;
            }
        }
        sort(nums.begin(),nums.end());
        if(check){
            int ans;
            int mx_cnt = -1;
            for(int i=0;i<n;++i){
                if(!(nums[i]&1)){
                    if(hs[nums[i]] > mx_cnt){
                        mx_cnt = hs[nums[i]];
                        ans = nums[i];
                    }
                }
            }
            return ans;
        }
        return -1;
    }
int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;++i)
        cin >> nums[i];

    cout << mostFrequentEven(nums);

    return 0;
}