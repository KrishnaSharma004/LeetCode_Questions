#include <iostream>
using namespace std;
const int M = 1337;
const int fm = 1440;
int powr(int a,int b){
    return pow(a,b);
}
int fun(vector<int> &b){
    int j =0;
    int i=b.size()-1;
    int ans = 0;
    while(i>=0){
        ans =  ((ans + b[i] * powr(10,j)) % fm);
        i--;
        j++;
    }
    return ans;
}
int binExp(int a,int b){
    int ans = 1;
    while(b){
        if(b&1){
            ans = (ans*a)%M;
        }
        a = (a*a)%M;
        b >>= 1;
    }
    return ans;
}
int superPow(int a, vector<int>& b){
    int new_b = fun(b);
    return binExp(a,new_b);
}
int main(){
    int a,n;
    cin >> a >> n;

    vector<int> b(n);
    for(int i=0;i<n;++i)
        cin >> b[i];

    int ans = superPow(a,b);
    cout << ans << '\n';
    return 0;
}