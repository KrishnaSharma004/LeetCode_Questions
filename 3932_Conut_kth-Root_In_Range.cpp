#include <bits/stdc++.h>
using namespace std;

int countKthRoots(int l, int r, int k) {
        int cnt = 0;
        if(k == 1) return r-l+1;
        if(r == 0) return 1;
        for(int i = 0; ; ++i){
            long long rs = pow(i,k);
            if(rs>r) break;
            if(rs>=l) cnt++;
        }
        return cnt;
    }

int main(){
    int l,r,k;
    cin >> l >> r >> k;
    cout << countKthRoots(l,r,k) << '\n';
    return 0;
}