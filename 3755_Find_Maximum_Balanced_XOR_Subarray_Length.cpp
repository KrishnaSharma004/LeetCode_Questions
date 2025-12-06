#include <iostream>
#include <vector>
using namespace std;
int maxBalancedsubarray(vector<int> &nums){
    int largest = 0;
    int xorr = 0;
    for(int i=0;i<nums.size();++i){

    }
    return largest;
}
int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;++i){
        cin >> nums[i];
    }
    
    cout << maxBalancedsubarray(nums) << endl;

    return 0;
}