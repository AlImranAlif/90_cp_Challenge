#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[101];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int maxIndex = 0;
    int minIndex = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] > a[maxIndex]) {
            maxIndex = i;
        }
    }

    for (int i = 0; i < n; i++) {
        if (a[i] <= a[minIndex]) {
            minIndex = i;
        }
    }

    int moves = maxIndex + (n - 1 - minIndex);

    if (maxIndex > minIndex) {
        moves--;
    }

    cout << moves;

    return 0;
}