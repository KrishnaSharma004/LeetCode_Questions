#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
        int i = 0,j = s.size();
        while(j > i){
            if(!isalnum(s[i])){
                i++;
                continue;
            }
            if(!isalnum(s[j])){
                j--;
                continue;
            }
            if(tolower(s[i]) != tolower(s[j])) return false;

            i++;j--;
        }
        return true;
    }

int main(){
    string s;
    cin >> s;
    cout << isPalindrome(s) << '\n';
    return 0;
}
