#include <iostream>
#include <map>
using namespace std;
vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int,int> mp;
        for(int i=0;i<n;++i){
            mp[nums[i]]++;
        }
        vector<int> ans;
        for(auto no : mp){
            if(no.second > n/3)
                ans.push_back(no.first);
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

    vector<int> ans =  majorityElement(nums);

    for(int el : ans)
        cout << el << " " ;
    
    return 0;
}