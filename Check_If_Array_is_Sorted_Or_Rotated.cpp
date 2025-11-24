#include <iostream>
#include <vector>
using namespace std;

bool check(vector<int>& nums) {
    int count = 0;
    int n = nums.size();
        
    for (int i = 0; i < n; ++i) {
        if (nums[i] > nums[(i + 1) % n]) {
            count++;
        }
    }
    return count <= 1;
}
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;++i){
        cin >> v[i];
    }
    cout << (check(v)?"true":"false") << endl;
    return 0;
}