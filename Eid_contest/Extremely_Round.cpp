#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        int digits = n.length();
        int firstDigit = n[0] - '0';
        int answer = (digits - 1) * 9 + firstDigit;
        cout << answer << endl;
    }

    return 0;
}