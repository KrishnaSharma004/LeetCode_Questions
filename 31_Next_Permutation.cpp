#include <iostream>
using namespace std;

void nextPermutation(vector<int>& nums) {
    next_permutation(nums.begin(),nums.end());
}
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;++i)
        cin >> a[i];

    nextPermutation(a);

    for(auto x : a) cout << x << " ";

    return 0;
}