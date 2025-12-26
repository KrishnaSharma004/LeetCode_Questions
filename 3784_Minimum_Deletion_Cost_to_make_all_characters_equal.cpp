#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
long long minCost(string s, vector<int>& cost) {
    vector<long long> hm(26,0);
    for(int i=0;i<cost.size();++i){
        hm[s[i]-97] += cost[i];
    }
    for(int i=0;i<hm.size();++i)
        cout << hm[i] << " ";
    long long t_cost = accumulate(hm.begin(),hm.end(),0LL);
    long long h_cost = *max_element(hm.begin(),hm.end());
    long long min_d_cost = t_cost - h_cost;
        
    return min_d_cost;
}
int main(){
    int n;
    cin >> n;
    vector<int> cost(n);
    string s;
    cin >> s;
    for(int i=0;i<n;++i){
        cin >> cost[i];
    }
    long long min_d_cost = minCost(s,cost);
    cout << min_d_cost << endl;
    return 0;
}