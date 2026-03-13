#include <bits/stdc++.h>
using namespace std;

int minOperations(string s) {
        int n = s.size();
        if(is_sorted(s.begin(), s.end())) return 0;
        if(n == 2) return -1;
        char a = *min_element(s.begin(), s.end());
        char b = *max_element(s.begin(), s.end());
        if(s[0] == a || s[n -1] == b) return 1;
        if(s[0] == b && s[n - 1] == a && count(s.begin(), s.end(), a) == 1 && count(s.begin(), s.end(), b) == 1) return 3;
        return 2;  
    }

int main(){
    string s;
    cin >> s;

    cout << minOperations(s) << '\n';
    return 0;
}