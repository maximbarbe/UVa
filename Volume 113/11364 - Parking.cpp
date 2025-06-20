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
        std::cin >> n;
        int max_v = 0;
        int min_v = 100;
        for (int j = 0; j < n; j++) {
            std::cin >> m;
            max_v = std::max(m, max_v);
            min_v = std::min(min_v, m); 
        }
        std::cout << 2*(max_v - min_v) << std::endl;
    }
    return 0;
}