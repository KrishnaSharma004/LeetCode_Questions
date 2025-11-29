#include <iostream>
#include <vector>
using namespace std;

long long sumAndMultiply(int n) {
    long long sum = 0;
    vector<long long> n_v;
    while(n>0){
        int l_digit = n%10;
        sum += l_digit;
        if(l_digit != 0){
            n_v.push_back(l_digit);
        }
        n = n/10;
    }
    long long x = 0;
    for(int i=0;i<n_v.size();++i){
        x += n_v[i]*pow(10,i);
    }
    return x*sum;
}

int main(){
    int n; cin >> n;
    cout << sumAndMultiply(n) << endl;
    
    return 0;
}