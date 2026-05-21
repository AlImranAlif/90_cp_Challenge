#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    bool passed[101] = {false};
    int p, level;
    cin >> p;
    for (int i = 0; i < p; i++) {
        cin >> level;
        passed[level] = true;
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> level;
        passed[level] = true;
    }
    bool canPass = true;
    for (int i = 1; i <= n; i++) {
        if (!passed[i]) {
            canPass = false;
            break;
        }
    }
    if (canPass)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";

    return 0;
}