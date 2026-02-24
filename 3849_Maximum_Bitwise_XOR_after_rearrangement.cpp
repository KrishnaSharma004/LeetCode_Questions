#include <bits/stdc++.h>

using namespace std; 
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()

string maximumXor(string s, string t) {
    int n = s.size();
    int m = t.size();
        
    int cnt0 = 0, cnt1 = 0;
    for(int i = 0; i < m ; ++i){
        if(t[i] == '0') cnt0++;
        else cnt1++;
    }

    string ans = "";
    for(int i = 0; i < n ; ++i){
        if(s[i] == '1'){
            if(cnt0 > 0){
                ans += "1";
                cnt0--;
            }
            else if(cnt1 > 0){
                ans += "0";
                cnt1--;
            }
        }
        else {
            if(cnt1 > 0){
                ans += "1";
                cnt1--;
            }
            else if(cnt0 > 0){
                ans += "0";
                cnt0--;
            }
        }
    }
    return ans;
}

int32_t main(){
	std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        string str;
        string t;
        cin >> str;
        cin >> t;

        cout << maximumXor(str, t) << '\n';
    }
    return 0;
}