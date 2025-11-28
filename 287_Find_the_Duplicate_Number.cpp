#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int> &nums){
    int slow = 0;
    int fast = 0;
    
    while(true){
        slow = nums[slow];
        fast = nums[nums[fast]];
        if(slow == fast){
            break;
        }
    }
    slow = 0;
    while(slow != fast){
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;
}
    
int main(){
    int n; cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;++i){
        cin >> nums[i];
    }
    
    cout << findDuplicate(nums) << endl;

    return 0;
}