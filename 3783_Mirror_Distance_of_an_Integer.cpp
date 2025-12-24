#include <iostream>
using namespace std;

int count_digit(int n){
        int count = 0;
        while(n>0){
            n=n/10;
            count++;
        }
        return count;
    }
    int reverse(int n){
        int rev = 0;
        int i = count_digit(n)-1;
        while(n>0){
            int lst = n%10;
            rev = rev + lst*pow(10,i);
            n = n/10;
            i--;
        }
        return rev;
    }
    int mirrorDistance(int n) {
        return abs(n-reverse(n));
    }

int mian(){
    int n;
    cin >> n;
    int mirror_dis = mirrorDistance(n);
    cout << mirror_dis << endl;
    return 0;
}