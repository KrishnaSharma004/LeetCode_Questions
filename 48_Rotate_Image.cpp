#include <iostream>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    for(int i = 0; i < n-1 ; ++i)
        for(int j = i+1 ; j < n; ++j)
            swap(matrix[i][j], matrix[j][i]);

    for(int i = 0 ; i < n ; ++i)
        reverse(matrix[i].begin(), matrix[i].end());
}

int main(){
    int n;
    cin >> n;
    vector<vector<int> > m;
    for(int i = 0 ; i < n; ++i){
        vector<int> temp;
        for(int j = 0; j < n ; ++j){
            int x;
            cin >> x;
            temp.push_back(x);
        }
        m.push_back(temp);
    }

    rotate(m);

    for(auto x : m){
        for(int i : x){
            cout << i << " ";
        }
        cout << '\n';
    }
    return 0;
}