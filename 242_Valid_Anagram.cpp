#include <bits/stdc++.h>
using namespace std;

    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        vector<int> hs(26, 0);
        for(auto i : s){
            hs[i-'a']++;
        }
        for(auto i : t){
            if(hs[i-'a'] == 0) return false;
            else hs[i-'a']--;
        }
        return true;
    }
int main(){
    string s, t;
    cin >> s >> t;

    cout << isAnagram(s,t) << '\n';
    return 0;
}