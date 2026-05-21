#include <iostream>
#include <set>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    set<char> letters;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            letters.insert(s[i]);
        }
    }
    cout << letters.size();
    return 0;
}