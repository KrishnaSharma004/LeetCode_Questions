#include <iostream>
using namespace std;

int vowelConsonantScore(string s) {
    int n = s.size();
    int cnt_v = 0;
    int cnt_c = 0;
    for(int i = 0; i< n; ++i){
        if((int)s[i] <= 122 && (int)s[i] >= 97)
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                cnt_v++;
            else cnt_c++;
    }
    if(cnt_c == 0) return 0;
    return cnt_v / cnt_c;
}

int main(){
    string s;
    cin >> s;

    cout << vowelConsonantScore(s) << '\n';
    
    return 0;
}