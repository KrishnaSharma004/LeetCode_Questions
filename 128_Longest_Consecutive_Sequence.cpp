#include <iostream> 
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int longestConsecutive(vector<int>& nums) {
    int n = nums.size();
    if(n == 0) return 0;
    sort(nums.begin(), nums.end());
    int cons = 1;
    int max_const = 1;
    for(int i = 0;i<n-1;++i){
        if(nums[i] == nums[i+1]) continue;
        else if(nums[i] == nums[i+1] - 1) cons++;
        else cons = 1;
        max_const = max(max_const, cons);
    }
    return max_const;
}
 
int longestConsecutive2(vector<int>& nums) {
    int n = nums.size();
    if(n == 0) return 0;
    int largest = 1;
    unordered_set<int> st;
    for(int i=0;i<n;++i) st.insert(nums[i]);

    for(auto it : st){
        if(st.find(it-1) == st.end()){
            int cnt = 1;
            int x = it;
            while(st.find(x+1) != st.end()){
                x++;
                cnt++;
            }
            largest = max(largest, cnt);
        }
    }
    return largest;
}  


int main(){
    int n ;
    cin >> n ;
    vector<int> a(n);
    for(int i=0;i<n;++i){
        cin >> a[i];
    }

    cout << longestConsecutive(a) << '\n';
    return 0;
}