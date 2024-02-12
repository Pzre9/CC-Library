// Made by PzreNTx
#include <iostream>
#include <cmath>

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        int x[4], y[4];
        int y1 = 0, y2 = 0;
        bool exited = false;
        for (int j = 0; j < 4; j++) {
            std::cin >> x[j] >> y[j];
        }
        for (int k = 0; k < 4; k++) {
            for (int l = k+1;l< 4; l++) {
                if (x[k] == x[l]) {
                    y1 = y[k];
                    y2 = y[l];
                    exited = true;
                    break;
                }
            }
            if (exited) break;
        }
        if (exited) {
            std::cout << (y1 - y2) * (y1 - y2) << '\n';
        }
    }
    return 0;
}