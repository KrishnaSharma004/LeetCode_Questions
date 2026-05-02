#include <bits/stdc++.h>
using namespace std;

int firstMatchingIndex(string s) {
        int n = s.size();
        for(int i = 0 ; i < ceil(n/2.0) ; ++i){
            if(s[i] == s[n - i - 1]) return i;
        }
        return -1;
    }

int main(){
    string s;
    cin >> s;
    cout << firstMatchingIndex(s) << '\n';
    return 0;
}