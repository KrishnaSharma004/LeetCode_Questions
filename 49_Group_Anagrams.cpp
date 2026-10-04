#include <iostream>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<pair<string, string> > vp(n);

        for(int i = 0 ; i < n ; ++i){
            string str = strs[i];
            sort(str.begin(), str.end());
            vp[i].first = str;
            vp[i].second = strs[i];
        }
        vector<vector<string>> ans;
        sort(vp.begin(), vp.end());
        
        for(int i = 0 ; i < n; ++i){
            vector<string> grp;
            grp.push_back(vp[i].second);
            int j = i+1;
            bool isfinal = 0;
            while(j<n){
                if(vp[j].first == vp[i].first){
                    grp.push_back(vp[j].second);
                }
                else{
                    i = j-1;
                    break;
                }
                j++;
                if(j == n) isfinal = 1;
            }
            ans.push_back(grp);
            if(isfinal) break;
        }
        return ans;
    }

int main(){
    int n;
    cin >> n;
    vector<string> a(n);
    for(int i=0;i<n;++i){
        cin >> a[i];
    }

    vector<vector<string>> ans = groupAnagrams(a);
    for(auto &i : ans)
        for(auto &e : i){
            cout << e << " ";
        }
        cout << '\n';
    
    return 0;
}