#include <iostream>
#include <vector>
using namespace std;

void updatesum(vector<int> &s, int x){
        for(int i = 0 ; i < 32 ; ++i){
            int is_set = x & (1 << i);
            if(is_set) 
                s[i]++;
        }
    }
    int numfromBits(vector<int> &s){
        int num = 0;
        for(int i = 0; i < 32 ; ++i){
            num += (s[i] * (1 << i));
        }
        return num;
    }
    int singleNumber(vector<int>& nums) {
        vector<int> sumar(32,0);
        for(int x : nums){
            updatesum(sumar, x);
        }
        for(int i = 0 ;i < 32 ; ++i){
            sumar[i] %= 3;
        }
        return numfromBits(sumar);
    }
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &x : a)     
        cin >> x;

    cout << singleNumber(a) << '\n';
    return 0;
}