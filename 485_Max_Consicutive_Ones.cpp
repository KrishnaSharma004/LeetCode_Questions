#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int max1 = 0;
    int count = 0;
    for(int i=0;i<nums.size();++i){
        if(nums[i] == 1){
            count++;
            max1 = max(max1,count);
        }else{
            count = 0;
        }
    }
    return max1;
}
int main(){
    int n;cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;++i){
        cin >> nums[i];
    }
    
    cout << findMaxConsecutiveOnes(nums) << endl;

    return 0;
}