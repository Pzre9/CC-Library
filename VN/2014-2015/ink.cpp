/* 2014 - 2015 Hung Yen IT Exam for Excellent Students (this feels a bit sugar-coated)
  Made by PzreNTx */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int x[10];
    for (int i = 0; i < 10; i++) {
        cin >> x[i];
    }
    int n; cin >> n;
    int t = 0;
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        for (int i = 0; i < s.length(); i++) {
            t += x[s[i] - 48];
        }
    }
    cout << t;
    return 0;
}
