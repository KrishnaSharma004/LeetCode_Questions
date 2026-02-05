#include <iostream>
using namespace std;

vector<int> countBits(int n) {
    vector<int> ans;
    for(int i = 0; i <=  n ; ++i){
        int b = __builtin_popcount(i);
        ans.push_back(b);
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    
    vector<int> a = countBits(n) ;

    for(int x : a) cout << x << " ";
    
    return 0;
}