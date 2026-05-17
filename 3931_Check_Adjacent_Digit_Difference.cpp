#include <bits/stdc++.h>
using namespace std;

bool isAdjacentDiffAtMostTwo(string s) {
        for(int i = 0; i < s.size() - 1 ; ++i){
            if(abs((int)(s[i]-'1') - (int)(s[i + 1]-'1')) > 2){
                return false;
            }
        }
        return true;
    }

int main(){
    string s;
    cin >> s;
    cout << isAdjacentDiffAtMostTwo(s) << '\n';
    return 0;
}