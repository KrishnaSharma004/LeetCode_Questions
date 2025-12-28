#include <iostream>
#include <vector>
#include <map>
using namespace std;
int minOperations(vector<int>& nums) {
    int n = nums.size();
    map<int,int> hash_map;
    for(int i=0;i<n;++i){
        hash_map[nums[i]]++;
    }
    int ct = 0;
    for(auto it : hash_map){
        if(it.second > 1){
            for(int i=3*ct;i<3*(ct+1);++i){
                hash_map[nums[i]]--;
            }
            ct++;
        }
    }
    return ct;
}
int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;++i)
        cin >> nums[i];
    int minop = minOperations(nums);
    cout << minop << "\n";
    return 0;
}