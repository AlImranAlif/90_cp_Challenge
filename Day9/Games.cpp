#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    int home[30], guest[30];
    int freq[101] = {0};  

    for (int i = 0; i < n; i++) {
        cin >> home[i] >> guest[i];
        freq[guest[i]]++;  
    }

    int ans = 0;

    for (int i = 0; i < n; i++) {
        ans += freq[home[i]]; 
    }

    cout << ans;

    return 0;
}