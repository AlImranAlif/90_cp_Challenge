#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int arr[100];
    int n = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '+') {
            arr[n] = s[i] - '0'; 
            n++;
        }
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++) {
        cout << arr[i];

        if (i != n - 1) {
            cout << "+";
        }
    }
    return 0;
}