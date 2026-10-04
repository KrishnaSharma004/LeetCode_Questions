#include <bits/stdc++.h>
using namespace std;

    bool isValidSudoku(vector<vector<char>>& board) {
        int n = 9;
        bool valid = true;
        //row check...
        for(int i = 0 ; i < n ; ++i){
            vector<int> hs(n+1, 0);
            for(int j = 0 ; j < n ; ++j){
                if(board[i][j] != '.'){
                    hs[board[i][j] - '0']++;
                    if(hs[board[i][j] - '0'] == 2) return valid = false;
                }
            }
        }
        //col check...
        for(int i = 0 ; i < n ; ++i){
            vector<int> hs(n+1, 0);
            for(int j = 0 ; j < n ; ++j){
                if(board[j][i] != '.'){
                    hs[board[j][i] - '0']++;
                    if(hs[board[j][i] - '0'] == 2) return valid = false;
                }
            }
        }
        //3x3 box check...
        int x = 0, y = 0;
        while(x < n){
            vector<int> hs(n+1, 0);
            for(int i = x ; i < x+3 ; ++i){
                for(int j = y ; j < y+3 ; ++j){
                    if(board[i][j] != '.'){
                        hs[board[i][j] - '0']++;
                        if(hs[board[i][j] - '0'] == 2) return valid = false;
                    }
                }
            }
            y += 3;
            if(y >= n){
                y = 0;
                x += 3;
            }
        }
        return valid;
    }

int main(){
    int n;
    cin >> n;
    vector<vector<char> > m;
    for(int i = 0 ; i < n; ++i){
        vector<char> temp;
        for(int j = 0; j < n ; ++j){
            int x;
            cin >> x;
            temp.push_back(x);
        }
        m.push_back(temp);
    }

    cout << isValidSudoku(m) << '\n';

    return 0;
}