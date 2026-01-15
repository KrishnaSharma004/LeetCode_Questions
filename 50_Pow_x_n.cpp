#include <iostream>
using namespace std;

double myPow(double x, int n) {
    double ans = 1;
    long long new_n = abs(n*1LL);
    while(new_n){
        if(new_n&1)
            ans = ans * x;

        x *= x;
        new_n >>= 1;
    }
    if(n < 0){
        return 1/ans;
    }
    else return ans;
}

int main(){
    int n;
    double x;
    cin >> x >> n;

    cout << myPow(x,n) << '\n';

    return 0;
}