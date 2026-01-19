#include <iostream>
#include <map>
using namespace std;
int majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int,int> mp;
        for(int i=0;i<n;++i){
            mp[nums[i]]++;
        }
        int ans ;
        for(auto no : mp){
            if(no.second > n/2)
                ans = no.first;
        }
        return ans;
    }
int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;++i){
        cin >> nums[i];
    }

    cout << majorityElement(nums);
    
    return 0;
}