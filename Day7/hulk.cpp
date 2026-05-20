#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    string res = "";
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1)
            res += "I hate";
        else
            res += "I love";

        if (i != n)
            res += " that ";
        else
            res += " it";
    }
    cout << res << endl;
    return 0;
}