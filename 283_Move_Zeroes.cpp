#include <iostream>
using namespace std;
void moveZeroes(vector<int>& nums) {
    int n = nums.size();
    bool check = false;
    int j = -1;

    for(int i=0;i<n-1;++i){
        if(nums[i] == 0){
            j = i;
            check = true; 
            break;
        }
    }
    if(check)//Agar koi zero hai hi nahi to kuch karna hi nahi hai 
        for(int i=j+1;i<n;++i){
            if(nums[i] != 0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
}

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;++i)
        cin >> nums[i];

    moveZeroes(nums);

    for(int ele : nums)
        cout << ele << " ";
        
    return 0;
}