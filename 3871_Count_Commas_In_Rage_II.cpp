#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
long long countCommas(long long n) {
    ll no_com = 0;
    ll max_lim = 1000;
    while (max_lim <= n){
        ll ttl_cm = n - max_lim;
        no_com = no_com + (1 + ttl_cm);
        max_lim *= 1000;
    }
    return no_com;
}
int main(){
    int n;
    cin >> n;

    cout << countCommas(n) << '\n';
    return 0;
}