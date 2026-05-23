#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string n;
        cin >> n;

        int k = 0;
        int parts[10];

        for (int i = 0; i < n.size(); i++) {
            if (n[i] != '0') {
                int val = (n[i] - '0');

                for (int j = i + 1; j < n.size(); j++)
                    val *= 10;

                parts[k++] = val;
            }
        }

        cout << k << "\n";
        for (int i = 0; i < k; i++)
            cout << parts[i] << " ";
        cout << "\n";
    }
    return 0;
}