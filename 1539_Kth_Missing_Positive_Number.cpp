#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second 
#define pb push_back
#define pp pop_back
#define all(x) x.begin(), x.end()
#define vi vector<int> 
#define vll vector<ll> 
#define vb vector<bool> 
#define vch vector<char>
#define si set<int> 
#define sch set<char> 
#define sll set<ll> 
#define mpii map<int, int> 
#define mpll map<ll, ll> 
#define umpll unordered_map<ll, ll> 
#define umpii unordered_map<int, int> 
#define mpli map<ll, int> 
#define mpil map<int, ll> 
#define vpii vector<pair<int, int>>
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define floopinc(i,x,y) for(int i = x; i < y ; ++i)
#define floopdec(i,x,y) for(int i = x; i >= y ; --i)
#define fauto(i,x) for(auto &i : x)
typedef long long ll; 
int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int trgt = 1;
        int cnt = 0;
        while(cnt < k){
            bool found = false;
            int l = 0, r = n-1;
            while(l<=r){
                int d = (l+r)/2;
                if(arr[d] == trgt){
                    found = true;
                    break;
                }
                if(arr[d] > trgt){
                    r = d - 1;
                }else{
                    l = d + 1;
                }
            }
            if(!found){
                cnt++;
            }
            if(cnt == k){
                return trgt;
            }
            trgt++;
        }
        return 0;
    }
void krishna(){
    int n, k;
    cin >> n >> k;
    vi a(n);
    fauto(i,a) cin >> i;
    cout << findKthPositive(a, k) << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        krishna();
    }  
    return 0;
}