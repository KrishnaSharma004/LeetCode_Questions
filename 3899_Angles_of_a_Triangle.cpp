#include <bits/stdc++.h>
using namespace std;

vector<double> internalAngles(vector<int>& sides) {
        sort(sides.begin(), sides.end());
        vector<double> angles;
        if(sides[0] + sides[1] <= sides[2]) return angles;
        double a = sides[0], b = sides[1], c = sides[2];
        double A = acos((b*b + c*c - a*a)/(2*b*c)) * 57.2957795131;
        double B = acos((a*a + c*c - b*b)/(2*c*a)) * 57.2957795131;
        double C = acos((a*a + b*b - c*c)/(2*b*a)) * 57.2957795131;
        angles.push_back(A);
        angles.push_back(B);
        angles.push_back(C);
        sort(angles.begin(), angles.end());
        return angles;
    }

int main(){
    vector<int> sides(3);
    for(auto &i : sides){
        cin >> i;
    }
    vector<double> ans = internalAngles(sides);
    for(auto &i : ans){
        cout << i << " ";
    }
    cout << '\n';
    return 0;
}