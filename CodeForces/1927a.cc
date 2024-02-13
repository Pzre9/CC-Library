// made by pzrentx
#include <iostream>
#include <string>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int n,k1,k2; cin >> n;
        string s; cin >> s;
        char ch = 'B';
        int fst = s.find(ch);
        int lst = s.rfind(ch);
        cout << lst - fst + 1 << '\n';
    }
    return 0;
}
