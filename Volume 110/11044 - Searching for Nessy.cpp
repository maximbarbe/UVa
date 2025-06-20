#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <set>
#include <string>




int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
    
    int t, n,m;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        std::cin >> n >> m;
        printf("%d\n", (n/3)*(m/3));
    }
    return 0;
}