#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <tuple>
#include <math.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
const double PI = acos(-1);

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t, n, v,c;
    cin >> t;
    while (t) {
        t --;
        c ++;
        int high = 0, low = 0;
        cin >> n;
        vi walls;
        for (int i = 0; i < n; i++) {
            cin >> v;
            walls.push_back(v);
        }
        for (int i = 1; i < n;i++) {
            if (walls[i] > walls[i - 1]) high++;
            else if (walls[i] < walls[i - 1]) low++;
        }
        printf("Case %d: %d %d\n", c, high, low);
    }

}