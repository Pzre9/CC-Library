/*
 New knowledge: Bitwise and constructive algorithms.
 Made by PzreNTx (and editorial from CF (2hard 4me))
*/
#include <bits/stdc++.h>
using namespace std;
int m_sb(int n) {
    int msb= -1;
    for (int i = 31; i >= 0; --i) {
        if (n & (1 << i)) {
            msb = i;
            break;
        }
    }
    return msb;
}
bool po2(int n)
{
    if (n == 0)
        return false;

    return (ceil(log2(n)) == floor(log2(n)));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        if (n == 5) {
            cout << '5' << '\n' << "2 1 3 4 5\n";
            continue;
        }
        vector<int> a(n);
        int tp = 0;
        int lsb = n & -n; // new new new
        int msb = m_sb(n);
        if (n % 2 != 0) {
            a[n-1] = n;
            a[n-2] = lsb + (lsb == 1 ? 2 : 1);
            a[n-3] = n - lsb;
            a[n-4] = lsb;
            int pos = 0;
            for (int i = 1; i <= n; i++) {
                if (i != a[n-4] && i != a[n-3] && i != a[n-2] && i != a[n-1]) {
                    a[pos++] = i;
                }
            }
            for (int i = 0; i < a.size(); i++) {
                if (i % 2 == 0) {
                    tp |= a[i];
                } else {
                    tp &= a[i];
                }
            }
            cout << tp << '\n';
            for (int i = 0; i < a.size(); i++) {
                cout << a[i] << ' ';
            }
            cout << '\n';
        } else {
            if (po2(n)) {
                a[n-1] = msb - 1;
                a[n-2] = n - 1;
                a[n-3] = n;
            int pos = 0;
            for (int i = 1; i <= n; i++) {
                if (i != a[n-3] && i != a[n-2] && i != a[n-1]) {
                    a[pos++] = i;
                }
            }
            for (int i = 0; i < a.size(); i++) {
                tp |= a[i];
            }
            cout << tp << '\n';
            for (int i = 0; i < a.size(); i++) {
                cout << a[i] << ' ';
            }
            cout << '\n';
            } else {
                a[n-5] = n;
                a[n-4] = n-1;
                a[n-3] = n-2;
                a[n-2] = 3;
                a[n-1] = 1;
            int pos = 0;
            for (int i = 1; i <= n; i++) {
                if (i != a[n-4] && i != a[n-3] && i != a[n-2] && i != a[n-1] && i != a[n-5]) {
                    a[pos++] = i;
                }
            }
            for (int i = 0; i < a.size(); i++) {
                tp |= a[i];
            }
            cout << tp << '\n';
            for (int i = 0; i < a.size(); i++) {
                cout << a[i] << ' ';
            }
            cout << '\n';
            }
            }
        }
        return 0;
        }
