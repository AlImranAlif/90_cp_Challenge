#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
     while (t--) {
        string temp = s;
        for (int i = 0; i <= n - 1; i++) {
            if (s[i] == 'B' && s[i + 1] == 'G') {
                temp[i] = 'G';
                temp[i + 1] = 'B';
            }
        }
        s = temp;
    }
    cout << s;
    return 0;
}