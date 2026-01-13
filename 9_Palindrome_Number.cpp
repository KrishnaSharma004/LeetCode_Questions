#include <iostream>
using namespace std;

int digitcount(int x){
    int cnt = 0;
    while(x>0){
        x /= 10;
        cnt++;
    }
    return cnt;
}
bool isPalindrome(int x){
    int n = x;
    long long new_x = 0;
    int i = digitcount(x)-1;
    while(n>0){
        int lst_dgt = n%10;
        new_x += lst_dgt*pow(10,i);
        i--;
        n /= 10;
    }
    if(new_x == x) 
        return true;
    return false;
}

int main(){
    int n;
    cin >> n;

    if(isPalindrome(n))
        cout << "Yes" << '\n';
    else cout << "No" << '\n';

    return 0;
}