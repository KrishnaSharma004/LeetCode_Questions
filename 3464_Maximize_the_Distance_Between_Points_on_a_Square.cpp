#include <bits/stdc++.h>
using namespace std;

bool check(vector<long long> &t, int k, int side, int d){
        int n= t.size();
        long long L = 4LL*side;
        vector<long long> extended(2 * n);
        for(int i = 0 ;i < n ; ++i){
            extended[i] = t[i];
            extended[i + n] = t[i] + L;
        }

        for(int i = 0 ; i < n ; ++i){
            int count = 1;
            long long pos = extended[i];
            int idx = i;
            for(int cnt = 1; cnt < k ; ++cnt){
                long long target = pos + d;
                auto it = std:: lower_bound(extended.begin()+idx+1, extended.begin()+i+n+1, target);
                if(it == extended.begin()+i+n+1){
                    count = -1;
                    break;
                }
                idx = it - extended.begin();
                pos = extended[idx];
                count++;
            }
            if(count == k && (extended[i] + L - pos) >= d){
                return true;
            }
        }
        return false;
    }

    int maxDistance(int side, vector<vector<int>>& points, int k) {
        vector<long long> arr;

        for(auto &i : points){
            int x = i[0], y = i[1];

            if(y == 0) arr.push_back(x);
            if(x == side) arr.push_back(side + y);
            if(y == side) arr.push_back(2LL * side + (side - x));
            if(x == 0) arr.push_back(3LL * side + (side - y));
        }
        sort(arr.begin(), arr.end());

        int lo = 0, hi = 2*side, ans = 0;
        while(lo <= hi){
            int mid = lo + (hi - lo)/2;
            if(check(arr,k,side,mid)){
                ans = mid;
                lo = mid + 1;
            }else{
                hi = mid - 1;
            }
        }
        return ans;
    }

int main(){
    int side;
    cin >> side;
    int noofpoints;
    cin >> noofpoints;
    vector<vector<int> > points;
    for(int i = 0 ; i < noofpoints ; ++i){
        vector<int> temp;
        for(int i = 0 ; i < 1 ; ++i){
            int x;
            cin >> x;
            temp.push_back(x);
        }
        points.push_back(temp);
    }
    int k;
    cin >> k;

    cout << maxDistance(side, points, k) << '\n';
    
    return 0;
}