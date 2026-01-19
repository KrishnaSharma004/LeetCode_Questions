#include <iostream>
using namespace std;
void bubbelSort(vector<int> &nums){
        int n = nums.size();
        for(int i=n-1;i>=0;i--){
            int didswap = 0;
            for(int j=0;j<=i-1;++j){
                if(nums[j] > nums[j+1])
                    swap(nums[j], nums[j+1]);
                    didswap++;
            }
            if(didswap == 0)
                break;
        }
        
    }
void sortColors(vector<int>& nums) {
    bubbelSort(nums);
}
int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;++i){
        cin >> nums[i];
    }
    sortColors(nums);
    
    for(int e : nums)
        cout << e << " ";
        
    return 0;
}