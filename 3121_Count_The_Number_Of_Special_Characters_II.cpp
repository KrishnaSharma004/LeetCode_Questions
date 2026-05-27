#include <bits/stdc++.h>
using namespace std;

int numberOfSpecialChars(string word) {
        vector<int> lr(26, -1);
        vector<int> up(26, -1);
        for(int i = 0; i < word.size() ; ++i){
            if(word[i] - 'a' >= 0 && word[i] - 'a' < 26){
                lr[word[i]-'a'] = i;
            }
            else{
                if(up[word[i]-'A'] != -1) continue;
                    up[word[i]-'A'] = i;
            }
        }
        int cnt = 0;
        for(int i = 0 ; i < 26 ; ++i){
            if(lr[i] == -1) continue;
            if(lr[i] < up[i]) cnt++;
        }
        return cnt;
    }
int main(){
    string s;
    cin >> s;
    cout << numberOfSpecialChars(s) << '\n';
    return 0;
}