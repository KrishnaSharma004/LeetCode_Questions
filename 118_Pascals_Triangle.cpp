#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i = 1 ; i <= numRows ; ++i){
            vector<int> temp;
            temp.push_back(1);
            long long elem = 1;
            for(int j = 1 ; j < i ; ++j){
                elem *= (i-j);
                elem /= j;
                temp.push_back(elem);
            }
            ans.push_back(temp);
        }
        return ans;
    }

int main(){
    int n;
    cin >> n;
    vector<vector<int>> ans = generate(n);
    for(auto &i : ans){
        for(auto &e : i){
            cout << e << " ";
        }
        cout << '\n';
    }
    return 0;
}