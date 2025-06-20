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
    int n, k;
    string cmd;
    int res = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> cmd;
        if (cmd == "donate") {
            cin >> k;
            res += k;
        } else {
            cout << res << endl;
        }
    }

}