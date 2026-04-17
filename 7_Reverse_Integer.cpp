#include<bits/stdc++.h>
using namespace std;

int reverse(int x) {
        int ans = 0;
        while(x != 0){
            int lst = x % 10;
            if((ans > INT_MAX/10) || (ans < INT_MIN/10)) return 0;

            ans = ans * 10 + lst;
            x /= 10;
        }
        return ans;
    }

int main(){
    int n;
    cin >> n;
    
    cout << reverse(n) << '\n';
    return 0;
}