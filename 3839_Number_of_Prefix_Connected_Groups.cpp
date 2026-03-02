#include<bits/stdc++.h>
using namespace std;
int prefixConnected(vector<string>& words, int k) {
    map<string, int> mp;
    for(auto &i : words){
        if(i.length() >= k){
            string p = i.substr(0, k);
            mp[p]++;
        }
    }
    int ans = 0;
    for(auto &i : mp){
        if(i.second >= 2) ans++;
    }
    return ans;
}

int main(){
    int n, k;
    cin >> n >> k;
    vector<string> a(n);
    for(auto &i : a) cin >> i;

    cout << prefixConnected(a, k) << '\n';
    return 0;
}