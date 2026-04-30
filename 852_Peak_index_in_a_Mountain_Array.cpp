#include <bits/stdc++.h>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        if(n == 1) return 0;
        if(arr[0] > arr[1]) return 0;
        if(arr[n - 1] > arr[n - 2]) return n - 1;
        int lo = 1, hi = n - 2;
        while(lo <= hi){
            int mid = (lo + hi)/2;
            if(arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1]){
                return mid;
            }
            if(arr[mid] > arr[mid - 1]){
                lo = mid + 1;
            }
            else if(arr[mid] > arr[mid + 1]){
                hi = mid - 1;
            }
        }
        return -1;
    }

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    cout << peakIndexInMountainArray(a) << '\n';
    return 0;
}