#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <tuple>
#include <math.h>
using namespace std;


#define all(x) begin(x), end(x);

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
const double PI = acos(-1);

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, m, c, ci, total, idx, maximum, t;
    bool start = true;
    while (scanf("%d %d %d", &n, &m, &c)) {

        t++;
        if (n == m && m == c  && c == 0) {
            break;
        }
        start = false;
        vi consumption;
        vector<bool> active;
        active.assign(n, false);
        total = 0;
        maximum = 0;
        for (int i = 0; i < n;i++) {
            scanf("%d", &ci);
            consumption.push_back(ci);
        }

        for (int i = 0; i < m; i++) {
            scanf("%d", &idx);
            if (!active[idx - 1]) {
                total += consumption[idx - 1];
                active[idx - 1] = true;
            } else {
                total -= consumption[idx - 1];
                active[idx - 1] = false;
            }
            maximum = max(total, maximum);
        }
        printf("Sequence %d\n", t);
        if (maximum > c) {
            printf("Fuse was blown.\n");

        } else {
            printf("Fuse was not blown.\n");
            printf("Maximal power consumption was %d amperes.\n", maximum);
        }
        printf("\n");

    }

}