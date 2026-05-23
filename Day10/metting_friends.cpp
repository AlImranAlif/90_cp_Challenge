#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    int mn = min({x, y, z});
    int mx = max({x, y, z});
    cout << mx - mn << endl;
    return 0;
}