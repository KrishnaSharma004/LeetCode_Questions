#include<bits/stdc++.h>
using namespace std;

int firstUniqChar(string s) {
        int n = s.size();
        vector<int> fr(26, 0);
        for(int i = 0 ; i < n ; ++i){
            fr[s[i] - 'a']++;
        }
        int ans = -1;
        for(int i = 0 ; i < n ; ++i){
            if(fr[s[i] - 'a'] == 1){
                ans = i;
                break;
            }
        }
        return ans;
    }

int main(){
    string s;
    cin >> s;
    cout << firstUniqChar(s) << '\n';
    return 0;
}