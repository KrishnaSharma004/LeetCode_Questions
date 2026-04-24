#include <bits/stdc++.h>
using namespace std;

int furthestDistanceFromOrigin(string moves) {
    int cntof_ = 0;
    int cntofL = 0;
    int cntofR = 0;
    for(int i = 0 ; i < moves.size() ; ++i){
        if(moves[i] == 'L') cntofL++;
        else if(moves[i] == 'R') cntofR++;
        else cntof_++;
    }
    return max(cntofR, cntofL) + cntof_ - min(cntofR, cntofL); 
}

int main(){
    string s;
    cin >> s;

    cout << furthestDistanceFromOrigin(s) << '\n';
    return 0;
}