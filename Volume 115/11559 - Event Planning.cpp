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
    int n, b, h, w, p, a;
    while (cin >> n >> b >> h >> w) {
        int minimum = 2000000000;
        for (int i = 0; i < h; i++) {
            cin >> p;
            for (int j = 0; j < w; j++) {
                cin >> a;
                if (a >= n && p*n <= b) {
                    minimum = min(minimum, p*n);
                }
            }
        }
        if (minimum == 2000000000) {
            cout << "stay home\n";
        } else {
            cout << minimum << "\n";
        }
    }

}