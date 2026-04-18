#include<bits/stdc++.h>
using namespace std;

vector<int> findDegrees(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> ans;
        for(int i = 0; i < n ; ++i){
            int connected = 0;
            for(int j = 0 ;j < m ; ++j){
                connected += matrix[i][j];
            }
            ans.push_back(connected);
        }
        return ans;
    }

int main(){
    int n;
    cin >> n;
    vector<vector<int> > m;
    for(int i = 0 ; i < n ; ++i){
        vector<int> temp;
        for(int i = 0 ; i < n ; ++i){
            int x;
            cin >> x;
            temp.push_back(x);
        }
        m.push_back(temp);
    }

    vector<int> ans = findDegrees(m);
    for(auto &i : ans) cout << i << " ";
    cout << '\n';
}