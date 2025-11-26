#include <iostream>
using namespace std;

int searchInsert(vector<int> &nums,int target){
    int lo =0,hi = nums.size()-1,mid;
    while(hi-lo>1){
        mid = (hi+lo)/2;
        if(nums[mid] < target){
            lo = mid+1;
        }else{
            hi = mid;
        }
    }
    if(nums[lo] == target){
        return lo;
    }
    else if(nums[hi] == target){
        return hi;
    }
    int i;
    for(i=0;i<=hi;++i){
        if(nums[i]>target){
            break;
        }
    }
    return i;
}

int main(){
    int n;cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;++i){
        cin >> nums[i];
    }

    int target;
    cin >> target;
    int searched_ele = searchInsert(nums,target);

    cout << searched_ele << endl;
    return 0;
}