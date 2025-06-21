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


int res(int v) {
    if (v < 10) return v;
    int sum = 0;
    while (v != 0) {
        sum += v%10;
        v /= 10;
    }
    return res(sum);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    while (1) {
        cin >> n;
        if (n == 0) {
            break;
        }
        cout << res(n) << "\n";
    }

}