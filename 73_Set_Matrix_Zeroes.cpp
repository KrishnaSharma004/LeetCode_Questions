#include <iostream> 
#include <vector>
using namespace std;

void setZeroesNOTINPLACE(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();

    vector<vector<int> >  a = matrix;
    for(int i = 0; i < m ; ++i){
        for(int j = 0; j < n ; ++j){
            if(matrix[i][j] == 0){
                int rp = i+1, rm = i-1, cp = j+1, cm = j-1;
                while(rp < m){
                    a[rp][j] = 0;
                    rp++;
                }
                while(rm >= 0){
                    a[rm][j] = 0;
                    rm--;
                }
                while(cp < n){
                    a[i][cp] = 0;
                    cp++;
                }
                while(cm >= 0){
                    a[i][cm] = 0;
                    cm--;
                }
            }
        }
    }
    matrix = a;
}
void setZeroesBETTER(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
        
    vector<int> col(m);
    vector<int> row(n);
    for(int i = 0; i < m ; ++i){
        for(int j = 0; j < n ; ++j){
            if(0 == matrix[i][j]){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    for(int i = 0; i < m ; ++i){
        for(int j = 0 ; j < n ; ++j){
            if(1 == row[i] || 1 == col[j]) matrix[i][j] = 0;
        }
    }
}
void setZeroes(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    int col0 = 1;
    for(int i = 0; i < m ; ++i){
        for(int j = 0; j < n ; ++j){
            if(0 == matrix[i][j]){
                matrix[i][0] = 0;
                if(j != 0)
                    matrix[0][j] = 0;
                else col0 = 0;
            }
        }
    }
    for(int i = m - 1; i > 0 ; --i){
            for(int j = n - 1 ; j > 0 ; --j){
                if(matrix[i][j] != 0){
                    if(matrix[i][0] == 0 || matrix[0][j] == 0){
                        matrix[i][j] = 0;
                    }
                }
            }
        }
    if(!matrix[0][0]){
        for(int j = 0 ; j < n ; ++j){
            matrix[0][j] = 0;
        }
    }
    if(!col0){
        for(int i = 0 ; i < m ; ++i){
            matrix[i][0] = 0;
        }
    }
}

int main(){
    int m, n ;
    cin >> m >> n ;
    vector<vector<int> > a;
    for(int i=0;i<m;++i){
        vector<int> temp;
        for(int j = 0;j<n;++j){
            int x;
            cin >> x;
            temp.push_back(x);
        }
        a.push_back(temp);
    }

    setZeroes(a);

    for(auto v : a){
        for(auto e : v){
            cout << e << " ";
        }
        cout << '\n';
    }

    return 0;
}