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
    
    int a, b;
    while (true) {
        cin >> a >> b;
        if (a == -1 && b == -1) {
            break;
        }
        if (a == b) {
            cout << 0<< endl;
        } else if (a < b) {
            cout << min(b - a, 100 + a - b) << endl;
        } else {
            cout << min(a - b, 100 + b - a) << endl;
        }
    }
}