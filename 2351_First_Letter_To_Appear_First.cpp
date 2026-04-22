#include<bits/stdc++.h>
using namespace std;

char repeatedCharacter(string s) {
        int n = s.size();
        vector<int> fr(26, 0);
        char ans;
        for(int i = 0 ; i < n ; ++i){
            if(++fr[s[i] - 'a'] == 2){
                ans = s[i];
                break;
            }
        }
        return ans;
    }

int main(){
    string s;
    cin >> s;
    cout << repeatedCharacter(s) << '\n';
    return 0;
}