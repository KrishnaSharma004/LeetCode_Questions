#include <iostream>
using namespace std;

    vector<int> spiralOrder(vector<vector<int>>& matrix){
        int n = matrix.size();
        int m = matrix[0].size();
        int left = 0, right = m-1;
        int top = 0, btm = n-1;
        vector<int> ans;

        while(top <= btm && left <= right ){
            for(int i = left ; i <= right ; ++i){
                ans.push_back(matrix[top][i]);
            }
            top++;
            for(int i = top ; i <= btm ; ++i){
                ans.push_back(matrix[i][right]);
            }
            right--;
            if(top <= btm){
                for(int i = right ; i >= left ; --i){
                    ans.push_back(matrix[btm][i]);
                }
                btm--;
            }
            if(left <= right){
                for(int i = btm ; i >= top ; --i){
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return ans;
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

    vector<int> ans = spiralOrder(m);

    for(int i : ans) cout << i << " ";
    cout << '\n';

    return 0;
}