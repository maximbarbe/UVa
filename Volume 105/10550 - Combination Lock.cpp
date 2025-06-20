#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <set>
#include <string>




int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
    
    int i,x1,x2,x3;

    while (true) {
        std::cin >> i >> x1 >> x2 >> x3;
        if (i == x1 && x1 == x2 && x2 == x3 && x3 == 0) {
            break;
        }
        int res = 720;
        if (x1 > i) {
            res += 9 * (i + 40 - x1);
        } else {
            res += 9 * (i - x1);
        }
        if (x2 < x1) {
            res += 9 * (x2 + 40 - x1);
        } else {
            res += 9 *(x2 - x1);
        }
        if (x3 > x2) {
            res += 9 * (x2 + 40 - x3);
        } else {
            res += 9 * (x2 - x3);
        }
        res += 360;
        printf("%d\n", res);
    }
    return 0;
}