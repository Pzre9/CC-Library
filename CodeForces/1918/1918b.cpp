/*
 Made by PzreNTx
 2024
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        pair <int,int> a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i].first;
        }
        for (int i = 0; i < n; i++) {
            cin >> a[i].second;
        }
        sort(a,a+n);
        for (int i = 0; i < n; i++) {
            cout << a[i].first << ' ';
        }
        cout << '\n';
        for (int i = 0; i < n; i++) {
            cout << a[i].second << ' ';
        }
        cout << '\n';
    }
    return 0;
}
// This has nothing to do with merge sort, interestingly.
