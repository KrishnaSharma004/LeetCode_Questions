#include <bits/stdc++.h>
using namespace std;

int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n1 = 0;
        int n2 = 0;
        while(n1 < nums1.size() && n2 < nums2.size()){
            if(nums1[n1] == nums2[n2]) return nums1[n1];
            if(nums1[n1] > nums2[n2]){
                n2++;
            }else{
                n1++;
            }
        }
        return -1;
    }
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for(auto &i : a) cin >> i;
    for(auto &i : b) cin >> i;
    cout << getCommon(a, b) << '\n';
    return 0;
}