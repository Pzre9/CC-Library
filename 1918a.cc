// made by pzrentx
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int n,m; cin >> n >> m;
        cout << n*floor(m/2);
    }
    return 0;
}