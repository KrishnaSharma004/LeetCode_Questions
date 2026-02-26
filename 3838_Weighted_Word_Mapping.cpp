#include <bits/stdc++.h>
using namespace std;

string mapWordWeights(vector<string>& words, vector<int>& weights) {
        int n = words.size();
        string ans = "";

        for (int i = 0; i < n; ++i) {
            int sz = words[i].size();
            int sum = 0;
            for (int j = 0; j < sz; ++j) {
                sum += weights[words[i][j] - 97];
            }
            ans += (char)(97 + 25 - sum % 26);
        }
        return ans;
    }

int main(){
    int n;
    cin >> n;
    vector<string> words(n);
    for(auto &i : words) cin >> i;
    vector<int> wt(26);
    for(int i = 0 ; i < 26 ; ++i){
        cin >> wt[i];
    }

    cout << mapWordWeights(words, wt) << '\n';
    
    return 0;
}