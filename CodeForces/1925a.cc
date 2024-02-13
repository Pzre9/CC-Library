#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int n,k; cin >> n >> k;
        for (int j = 0; j < n; j++) {
            for (char a = 'a'; a < 'a'+k ; a++) {
                cout << a;
            }
        }
        cout << '\n';
    }
}
/*
    Explanation:
    "baab" when reordered becomes "abab". Perfect, right?
*/