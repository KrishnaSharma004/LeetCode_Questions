#include <iostream>
#include <iomanip>
using namespace std;

int mySqrt(int x) {
        if (x < 2) return x;

        int lo = 1, hi = x / 2;
        int ans = 1;

        while (lo <= hi) {
            long long mid = lo + (hi - lo) / 2;
            long long sq = mid * mid;

            if (sq == x) {
                return mid;
            } else if (sq < x) {
                ans = mid;      
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        return ans;
    }

int main(){
    int x;
    cin >> x;
    cout << mySqrt(x) << endl;
    return 0;
}