#include<bits/stdc++.h>
using namespace std;
int main(){
        string a, b, c;
    cin >> a >> b >> c;

    int freq[26] = {0};

    for (char ch : a) freq[ch - 'A']++;
    for (char ch : b) freq[ch - 'A']++;

    for (char ch : c) freq[ch - 'A']--;

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
    return 0;
}