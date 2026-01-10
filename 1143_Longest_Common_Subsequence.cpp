#include <iostream>
#include <string>
using namespace std;
    int dp[1005][1005];
    int lcs(int i,int j,string &s1,string &s2){
        //Base case : any one of the string is empty
        if(i<0 || j<0) return 0;

        if(dp[i][j] != -1) return dp[i][j];

        //way 1: consider 1 char from s1
        int ans = lcs(i-1,j,s1,s2);

        //way 2: consider 1 char from s2
        ans = max(ans, lcs(i,j-1,s1,s2));

        //way 3: consider 1 char from s1 and s2
        ans = max(ans, lcs(i-1,j-1,s1,s2) + (s1[i]==s2[j]));

        return dp[i][j] = ans;
    }
    int longestCommonSubsequence(string text1, string text2) {
        memset(dp,-1,sizeof(dp));

        return lcs(text1.size()-1,text2.size()-1,text1,text2);
    }
int main(){
    string s1,s2;
    cin >> s1 >> s2;

    cout << longestCommonSubsequence(s1,s2) << '\n';

    return 0;
}