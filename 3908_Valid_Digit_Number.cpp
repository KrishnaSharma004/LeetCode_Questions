#include <bits/stdc++.h>
using namespace std;
bool validDigit(int n, int x) {
        bool found = false;
        while(n/10){
            int lst = n%10;
            if(lst == x) found = true;
            n/=10;
        }
        if(n%10 == x) return false;
        if(found) return true;
        return false;
    }
int main(){
    int n, x;
    cin >> n >> x;
    cout << validDigit(n,x) << '\n';
    return 0;
}