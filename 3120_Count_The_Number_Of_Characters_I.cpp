#include <bits/stdc++.h>
using namespace std;

int numberOfSpecialChars(string word) {
        int n = word.size();
        set<char> chr;
        for(int i = 0; i < n ; ++i){
            chr.insert(word[i]);
        }
        int cnt = 0;
        for(auto &i : chr){
            if(i - 'a' < 26 && i - 'a' >= 0){
                if(chr.find((char)(i - 32)) != chr.end()) cnt++;
            }
        }
        return cnt;
    }
int main(){
    string s;
    cin >> s;
    cout << numberOfSpecialChars(s) << '\n';
    return 0;
}