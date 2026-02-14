#include <iostream>
#include <vector>
using namespace std;

vector<int> singleNumber(vector<int>& nums) {
        long long rs = 0;
        int n = nums.size();
        for(int i = 0; i < n ; ++i){
            rs = rs ^ nums[i];
        }

        // int pos = 0;
        // long long temp = rs;
        // while((temp & 1) == 0){
        //     pos++;
        //     temp >>= 1;
        // }
        long long mask = rs & (-rs);// first right most set bit 

        int seta = 0;
        int setb = 0;
        
        for(int i = 0 ;i < n ; ++i){
            if((nums[i] & mask) > 0){
                seta ^= nums[i];
            }
            else {
                setb ^= nums[i];
            }
        }
        return {seta, setb};
    }

int main(){
    int n;
    cin >> n;

    vector<int> a(n);
    for(int &i : a)
        cin >> i;

    vector<int> ans = singleNumber(a);

    cout << ans[0] << " " << ans[1] << '\n'; 
    return 0;
}