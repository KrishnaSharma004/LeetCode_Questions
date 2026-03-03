#include <bits/stdc++.h>
using namespace std;

string reverseByType(string s) {
        int n = s.size() - 1;
        int i = 0;
        int j = n;
        while(i < j){
            if(!islower(s[i])) i++;
            else if(!islower(s[j])) j--;
            else{
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        i = 0; 
        j = n;
        while(i < j){
            if(islower(s[i])) i++;
            else if(islower(s[j])) j--;
            else{
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

    cout << reverseByType(s) << '\n';
    return 0;
}