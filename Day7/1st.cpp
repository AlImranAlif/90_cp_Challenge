#include <bits/stdc++.h>
using namespace std;
int main() {
    int a[4];
    for (int i = 0; i < 4; i++) cin >> a[i];
    int cnt = 0;
    for (int i = 0; i < 4; i++) {
        bool seen = false;
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                seen = true;
                break;
            }
        }
        if (!seen) cnt++;
    }
    cout << 4 - cnt << endl;
}