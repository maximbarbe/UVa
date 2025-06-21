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
    int t, n, v;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int mile = 0, juice = 0;
        cin >> n;
        for (int j = 0; j < n; j++) {
            cin >> v;
            mile += (v/30 + 1)*10;
            juice += (v/60 + 1)*15;
        }
        if (mile < juice) printf("Case %d: Mile %d\n", i+1, mile);
        else if (mile > juice) printf("Case %d: Juice %d\n", i+1, juice);
        else printf("Case %d: Mile Juice %d\n", i+1, mile);
    }

}