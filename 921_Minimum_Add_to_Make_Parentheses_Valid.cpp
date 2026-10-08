#include <bits/stdc++.h>
using namespace std;

int minAddToMakeValid(string s) {
        int open = 0;
        int close = 0;
        for(int i = 0 ; i < s.size() ; ++i){
            if(s[i] == '(') open++;
            if(s[i] == ')'){
                if(open > 0) open--;
                else close++;
            }
        }
        return open + close;
    }

int main(){
    string s;
    cin >> s;
    cout << minAddToMakeValid(s) << '\n';
    return 0;
}
