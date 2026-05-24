#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int p,q,n;
        cin>>n>>p>>q;
        if ((p == n && q== n) || (p + q <= n - 2))
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}