#include <bits/stdc++.h>
using namespace std;

string trimTrailingVowels(string s) {
        int n = s.size();
        string ans = "";
        set<char> vvl = {'a', 'e', 'i', 'o', 'u'};
        int idx = n - 1;
        for(int i = n - 1 ; i >= 0 ; --i){
            if(vvl.find(s[i]) == vvl.end()){
                break;
            }
            else{
                idx--;
            }
        }
        for(int i = 0; i <= idx ; ++i){
            ans += s[i];
        }
        return ans;
    }
int main(){
    string s;
    cin >> s;

    cout << trimTrailingVowels(s) << '\n';

    return 0;
}