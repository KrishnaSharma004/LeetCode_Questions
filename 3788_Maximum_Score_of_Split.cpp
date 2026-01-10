#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
#define ll long long
long long maximumScore(vector<int>& nums){
    int n = nums.size();
    vector<long long> score(n-1);
    score[0] = nums[0] - *min_element(nums.begin()+1,nums.end());
    for(int i=1;i<n-1;++i){
        long long suffmin = *min_element(nums.begin()+i+1,nums.end());
        long long prifsum = accumulate(nums.begin(),nums.begin()+i,0LL);
        score[i] = prifsum - suffmin;
    }
    for(int i=0;i<n-1;++i){
        cout << score[i] << " ";
    }
    cout << endl;
    return *max_element(score.begin(),score.end());
}
int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;++i)
        cin >> nums[i];
    
    ll maxs = maximumScore(nums);
    cout << maxs << "\n";
    return 0;
}