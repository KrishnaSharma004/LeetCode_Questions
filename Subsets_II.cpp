#include <iostream>
#include <vector>
#include <set>
using namespace std;

void putUniqueSubsets(set<vector<int> > &ds,int num,vector<int> &nums){

    int j = 0;

    vector<int> temp;
    while(num > 0){
        if(num & 1) temp.push_back(nums[j]);

        j++;
        num >>= 1;
    }
    sort(temp.begin(),temp.end());
    ds.insert(temp);
}

vector<vector<int>> subsetsWithDup(vector<int>& nums){
    int n = nums.size();
    set<vector<int>> ds;

    for(int i = 0;i < (1<<n) ; ++i){
        putUniqueSubsets(ds,i,nums);
    }

    return vector<vector<int>>(ds.begin(), ds.end());
}

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;++i){
        cin >> nums[i];
    }
    vector<vector<int> > ans = subsetsWithDup(nums);

    for(auto x : ans){
        for(auto ele : x){
            cout << ele << " ";
        }
        cout << '\n';
    }
    return 0;
}
