#include <bits/stdc++.h>
using namespace std;

string reverseOnlyLetters(string s) {
        int n = s.size();
        int i = 0;
        int j = n - 1;
        while(i < j){
            if(!isalpha(s[i])){
                i++;
            }
            else if(!isalpha(s[j])){
                j--;
            }else{
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        return s;
    }

int main(){
    string s;
    cin >> s;

    cout << reverseOnlyLetters(s) << '\n';
    return 0;
}