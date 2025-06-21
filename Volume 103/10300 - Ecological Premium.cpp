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
    int n, f, size, a, v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> f;
        int res = 0;
        for (int j = 0; j < f; j++) {
            cin >> size >> a >> v;
            res += size *v;
        }
        cout << res << endl;
    }

}