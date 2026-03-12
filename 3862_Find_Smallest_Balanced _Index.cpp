#include <bits/stdc++.h>
using namespace std;

//Most optimal one : 
int smallestBalancedIndex(vector<int>& nums) {
    long long lsum = 0;
    for (int x : nums) lsum += x;

    long long rprod = 1;
    for (int i = nums.size() - 1; i >= 0; --i) {
        lsum -= nums[i];  
        if (lsum == rprod) return i;
        if (lsum < rprod) break;
        rprod *= nums[i];
    }
    return -1;
}

// My opproach : 
int smallestBalancedIndex2(vector<int>& nums) {
        int n = nums.size();
        vector<long long> pf(n);
        vector<long long> sf_p(n, 1);

        pf[0] = 0;
        for(int i = 1; i < n ; ++i){
            pf[i] = pf[i - 1] + nums[i - 1];
        }
        sf_p[n - 1] = 1;
        long long mx  = LLONG_MAX;
        for(int i = n - 2 ; i >= 0 ; --i){
            if(sf_p[i + 1] >= mx / nums[i + 1]){
                break;
            }
            sf_p[i] = sf_p[i + 1] * nums[i + 1];
        }
        for(int i : sf_p) cout << i << " ";

        cout << '\n';
        for(int i = n - 1; i >= 0 ; --i){
            if(pf[i] == sf_p[i]){
                return i;
            }
        }
        return -1;
    }

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;


    cout << smallestBalancedIndex2(a) << '\n';
    return 0;
}
