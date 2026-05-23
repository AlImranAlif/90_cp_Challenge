#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        for (char &c : s) {
            if (c >= 'a' && c <= 'z')
                c = c - 'a' + 'A';
        }
        if (s == "YES")
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}