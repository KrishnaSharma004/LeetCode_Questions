#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n <= 1) return 1;
    return n * fact(n - 1);
}
bool isDigitorialPermutation(int n) {
    multiset<int> digits;
    int total = 0;
    int temp = n;
    while(temp){
        int dg = temp % 10;
        digits.insert(dg);
        total += fact(dg);
        temp /= 10;
    }
    bool check = true;
    while(total){
        int dg = total % 10;
        auto it = digits.find(dg);
        if( it != digits.end()){
            digits.erase(it);
        }
        else{
            check = false;
        }
        total /= 10;
    }
    if(digits.size() != 0)
        return false;
    if(check){
        return true;
    }
    else return false;
}
int main(){
    int n;
    cin >> n;
    
    cout << isDigitorialPermutation(n) << '\n';

    return 0;
}