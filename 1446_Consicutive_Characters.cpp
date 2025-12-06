#include <iostream>
using namespace std;
int maxPower(string s) {
        int pow = 1;
        int cur_max = 1;
        for(int i=0;i<s.size()-1;++i){
            if(s[i]==s[i+1]){
                cur_max++;
            }
            else{
                cur_max = 1;
            }
            pow = max(cur_max,pow);
        }
        return pow;
}
int main(){
    string s;
    cin >> s;
    int pow = maxPower(s);
    cout << pow << endl;
    return 0;
}