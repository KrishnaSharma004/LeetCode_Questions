#include <iostream>
#include <vector>
using namespace std;

int lastOccurance(vector<int> &nums,int target){
        int low = 0,high = nums.size()-1;
        int ans = nums.size();
        while(low<=high){
            int mid = (high + low)/2;
            if(nums[mid] > target){
                ans = mid;
                high = mid-1;
            }else{
                low = mid + 1;
            } 
        }
        return ans;
    }

    int firstOccurance(vector<int> &nums,int target){
        int low = 0,high = nums.size()-1;
        int ans = nums.size();
        while(low <= high){
            int mid = (high + low)/2;
            if(nums[mid] >= target){
                ans = mid;
                high = mid-1;
            }else{
                low = mid + 1;
            } 
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = firstOccurance(nums,target);
        int last = lastOccurance(nums,target)-1;
        vector<int> ans;
        if(first == nums.size() || nums[first] != target){
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }

int main(){
    int n;cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;++i){
        cin >> nums[i];
    }
    int target;
    cin >> target;
    vector<int> ans = searchRange(nums,target);

    for(auto it : ans){
        cout << it << " ";
    }
    return 0;
}