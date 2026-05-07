#include <bits/stdc++.h>
using namespace std;

vector<int> getRow(int rowIndex) {
        vector<int> res;
        res.push_back(1);
        long long ans = 1;
        for(int i = 1 ; i <= rowIndex ; ++i){
            ans *= (rowIndex+1-i);
            ans /= (i);
            res.push_back(ans);
        }
        return res;
    }

int main(){
    int n;
    cin >> n;
    vector<int> ans = getRow(n);
    for(auto &i : ans){
        cout << i << " ";
    }
    return 0;
}