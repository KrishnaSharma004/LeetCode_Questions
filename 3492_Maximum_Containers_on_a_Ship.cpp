#include <bits/stdc++.h>
using namespace std;

int maxContainers(int n, int w, int maxWeight) {
        return min(n*n , maxWeight/w);
    }

int main(){
    int n,w,maxWeight;
    cin >> n >> w >> maxWeight;
    cout << maxContainers(n,w,maxWeight);
    return 0;
}