#include <iostream>
#include <vector>
using namespace std;
    vector<vector<int> >subset;

    void generate(vector<int> &sub,int i,vector<int> &nums){
        if(i==nums.size()){
            subset.push_back(sub);
            return ;
        }
        //ith element is not taken : 
        generate(sub,i+1,nums);

        //ith element is now taken :
        sub.push_back(nums[i]);
        generate(sub,i+1,nums);
        sub.pop_back();
    }

    int main(){
        int n;
        cin >> n;
        vector<int> nums(n);
        for(int i=0;i<n;++i){
            cin >> nums[i];
        }
        vector<int> empty;
        generate(empty,0,nums);
        for(auto ele: subset){
            for(auto it : ele){
                cout << it << " ";
            }
            cout << endl;
        }
        return 0;
    }
