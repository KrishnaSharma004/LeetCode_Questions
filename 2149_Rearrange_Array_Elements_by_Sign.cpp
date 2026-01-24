#include <iostream>
using namespace std;
//Less optimal : 
// vector<int> rearrangeArray(vector<int>& nums) {
//     int s = nums.size();
//     vector<int> p;
//     vector<int> n;

//     for(int i=0;i<s;++i){
//         if(nums[i] > 0) p.push_back(nums[i]);
//         else n.push_back(nums[i]);
//     }

//     vector<int> ans;
//     for(int i=0 ;i < s/2 ; ++i){
//         ans.push_back(p[i]);
//         ans.push_back(n[i]);
//     }
//     return ans;
// }
// 
// More optimal : 
vector<int> rearrangeArray(vector<int>& nums) {
    int s = nums.size();
    vector<int> ans(s,0);
    int pos_idx = 0;
    int neg_idx = 1;
    for(int i=0;i<s;++i){
        if(nums[i] > 0){
            ans[pos_idx] = nums[i];
            pos_idx += 2;
        }else{
            ans[neg_idx] = nums[i];
            neg_idx += 2;
        }
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;++i)
        cin >> a[i];

    vector<int> ans = rearrangeArray(a);

    for(auto x : ans) cout << x << " ";

    return 0;
}