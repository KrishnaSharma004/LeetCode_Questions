#include <bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int cnt = 0;
        for(int i = n-1 ; i>=0 ; --i){
            if(nums[i] == val){
                cnt++;
                int j = i+1;
                while(j < n){
                    if(nums[j] != val){
                        swap(nums[j - 1], nums[j]);
                    }
                    else{
                        break;
                    }
                    j++;
                }
            }
        }
        return n - cnt;
    }

int main(){
    int n, val;
    cin >> n >> val;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    cout << removeElement(a, val) << '\n';
    return 0;
}