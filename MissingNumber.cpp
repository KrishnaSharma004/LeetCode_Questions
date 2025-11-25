#include <iostream>
#include <vector>
using namespace std;

int findmissingno(vector<int> &nums){
    int n = nums.size();
    vector<int> hash(n+1,0);
    for(int i=0;i<n;++i){
        hash[nums[i]]++;
    }
    for(int i=0;i<=n;++i){
        if(hash[i]==0){
            return i;
        }
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;++i){
        cin >> n;
    }
    cout << findmissingno(nums) << endl;
    return 0;
}