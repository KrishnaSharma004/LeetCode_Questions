#include <bits/stdc++.h>
using namespace std;

int m,n;
    int func(vector<vector<int>> &grid, int i, int j, int k, int cost, vector<vector<vector<int>>> &t){
        if(i >= m || j >= n){
            return INT_MIN;
        }
    
        int newCost = cost + (grid[i][j] > 0);
        if(newCost > k) return INT_MIN;
        if(i == m - 1 && j == n - 1){
            return grid[i][j];
        }
        if(t[i][j][cost] != -1){
            return t[i][j][cost];
        }
        int down = func(grid, i + 1, j, k, newCost, t);
        int right = func(grid, i, j + 1, k, newCost, t);

        int best = max(down, right);
        if(best == INT_MIN){
            return t[i][j][cost] = INT_MIN;
        }
        return t[i][j][cost] = grid[i][j] + best;
    }
    int maxPathScore(vector<vector<int>>& grid, int k) {
        m = grid.size();
        n = grid[0].size();

        vector<vector<vector<int> >> t(m + 1, vector<vector<int> >(n + 1, vector<int> (k + 1, - 1)));

        int result = func(grid, 0, 0, k, 0, t);

        return result == INT_MIN ? -1 : result;
    }

int main(){
    int m, n, k;
    cin >> m >> n >> k;
    vector<vector<int>> a(m);
    for(int i = 0 ; i < m ; ++i){
        vector<int> temp;
        for(int i = 0 ; i < n ; ++i){
            int x;
            cin >> x;
            temp.push_back(x);
        }
        a.push_back(temp);
    }
    cout << maxPathScore(a, k) << '\n';
    return 0;
}