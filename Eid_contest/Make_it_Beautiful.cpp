#include <bits/stdc++.h>
using namespace std;

bool is_beautiful(const vector<int>& arr) {
    long long sum = 0;
    for (int x : arr) {
        if (x == sum) return false;
        sum += x;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    for (int test = 0; test < t; ++test) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        if (a[0] == a.back()) {
            cout << "NO\n";
            continue;
        }
        
        // Try sorting descending
        vector<int> b = a;
        sort(b.rbegin(), b.rend());
        if (is_beautiful(b)) {
            cout << "YES\n";
            for (int x : b) cout << x << " ";
            cout << "\n";
            continue;
        }
        
        // Try sorting ascending
        sort(b.begin(), b.end());
        if (is_beautiful(b)) {
            cout << "YES\n";
            for (int x : b) cout << x << " ";
            cout << "\n";
            continue;
        }
        
        // Swap first two if needed or other strategies
        // Since n<=50, we can try a few permutations but better way:
        // Put largest first, then smallest, etc.
        vector<int> res;
        multiset<int> ms(a.begin(), a.end());
        long long sum = 0;
        
        // Start with largest
        auto it = ms.end();
        --it;
        res.push_back(*it);
        sum += *it;
        ms.erase(it);
        
        while (!ms.empty()) {
            // Try smallest first that != sum
            bool found = false;
            for (auto jt = ms.begin(); jt != ms.end(); ++jt) {
                if (*jt != sum) {
                    res.push_back(*jt);
                    sum += *jt;
                    ms.erase(jt);
                    found = true;
                    break;
                }
            }
            if (!found) break;
        }
        
        if (res.size() == n && is_beautiful(res)) {
            cout << "YES\n";
            for (int x : res) cout << x << " ";
            cout << "\n";
        } else {
            // Fallback: reverse the array or something
            vector<int> c = a;
            reverse(c.begin(), c.end());
            if (is_beautiful(c)) {
                cout << "YES\n";
                for (int x : c) cout << x << " ";
                cout << "\n";
            } else {
                // Should not reach here, but for safety
                cout << "NO\n";
            }
        }
    }
    return 0;
}