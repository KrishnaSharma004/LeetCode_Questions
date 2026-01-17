#include <iostream>
using namespace std;
void rotate1(vector<int>& nums, int k){
    int n = nums.size();
    k %= n;
    vector<int> temp(n);

    for(int i=0;i<n;++i)
        temp[i] = nums[i];

    for(int i=0;i<n;++i)
        temp[(i+k)%n] = nums[i];

    for(int i=0;i<n;++i)
        nums[i] = temp[i]; 
}
//0(3*N)


void rotate2(vector<int>& nums, int k){
    k %= nums.size();
    reverse(nums.begin(),nums.end());
    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.begin()+k,nums.end()); 
}
//In-place


int main(){
    int n,k;
    cin >> n >> k;

    vector<int> a(n);
    for(int i=0;i<n;++i)
        cin >> a[i];

    rotate2(a,k);

    for(int ele : a){
        cout << ele << " ";
    }
    return 0;
}