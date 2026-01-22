#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices) {
    int n = prices.size();
    vector<int> sf_mx(n);
    sf_mx[n-1] = prices[n-1];
    for(int i=n-2;i>=0;--i){
        sf_mx[i] = max(sf_mx[i+1],prices[i]);
    }
    int max_pr = 0;
    for(int i = 0;i < n-1;++i){
        if(sf_mx[i+1] - prices[i] > max_pr)
            max_pr = sf_mx[i+1] - prices[i];
    }
    return max_pr;
}

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;++i){
        cin >> nums[i];
    }
    cout << maxProfit(nums) << endl;
    
    return 0;
}