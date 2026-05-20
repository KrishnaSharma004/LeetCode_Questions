#include <bits/stdc++.h>
using namespace std;

vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> chk(n+1, 2);
        vector<int> ans(n);
        for(int i = 0 ; i < n ; ++i){
            chk[A[i]]--;chk[B[i]]--;
            int cnt = 0;
            for(int j = 0 ; j <= n ; ++j){
                if(chk[j] == 0) cnt++;
            }
            ans[i] = cnt;
        }
        return ans;
    }

int main(){
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(auto &i : a) cin >> i;
    for(auto &i : b) cin >> i;
    vector<int> ans = findThePrefixCommonArray(a, b);
    for(auto &i : ans) cout << i << " ";
    return 0;
}