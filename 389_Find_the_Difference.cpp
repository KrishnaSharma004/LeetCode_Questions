#include <bits/stdc++.h>
using namespace std;

char findTheDifference(string s, string t) {
        vector<int> hs_s(26, 0);
        for(int i = 0; i < s.size() ; ++i){
            hs_s[s[i] - 97]++;
        }
        vector<int> hs_t(26, 0);
        for(int i = 0; i < t.size() ; ++i){
            hs_t[t[i] - 97]++;
        }
        char ans;
        for(int i = 0; i < 26 ; ++i){
            if(hs_s[i] != hs_t[i]) ans = (char)(i + 97);
        }
        return ans;
    }
    
int main(){
    string s, t;
    cin >> s >> t;
    cout << findTheDifference(s, t) << '\n';
    return 0;
}