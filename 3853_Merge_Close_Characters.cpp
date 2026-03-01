#include <bits/stdc++.h>
using namespace std;

string mergeCharacters(string s, int k) {
        bool done = 1;
        while(done){
            done = 0;

            string a = s;
            vector<int> pos(26, -1);
            int n = s.length();
            for(int i = 0; i < n ; ++i){
                if(pos[s[i] - 'a'] != -1 && i - pos[s[i] - 'a'] <= k){
                    a.erase(i, 1);
                    done = 1;
                    break;
                }
                pos[s[i] - 'a'] = i;
            }
            if(!done){
                return a;
            }
            s = a;
        }
        return s;
    }

int main(){
    int k;
    string s;
    cin >> s >> k;

    cout << mergeCharacters(s, k) << '\n';
    return 0;
}