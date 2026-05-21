#include <bits/stdc++.h>
using namespace std;

int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        int n = arr1.size();
        set<int> all_pfs;
        for(int i = 0; i < n ; ++i){
            int x = arr1[i];
            while(x){
                int lst = x%10;
                all_pfs.insert(x);
                x/=10;
            }
        }
        int m = arr2.size();
        int mx_pf = 0;
        for(int i = 0 ; i < m ; ++i){
            int x = arr2[i];
            while(x){
                if(all_pfs.count(x) != 0){
                    mx_pf = max(mx_pf, x);
                }
                x /= 10;
            }
        }
        int ans = 0;
        while(mx_pf){
            ans++;
            mx_pf/=10;
        }
        return ans;
    }
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a1(n);
    for(auto &i : a1) cin >> i;
    vector<int> a2(m);
    for(auto &i : a2) cin >> i;
    cout << longestCommonPrefix(a1, a2) << '\n';
    return 0;
}