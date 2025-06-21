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
    int b, n, amt, c, v, d;
    while (true) {
        cin >> b >> n;
        if (b == 0 && n == 0) {
            break;
        }
        vi money;
        vi credits;
        vi debts;
        debts.assign(b, 0);
        credits.assign(b, 0);
        for (int i = 0; i < b; i++) {
            cin >> amt;
            money.push_back(amt);
        }
        for (int i = 0; i < n; i++) {
            cin >> d >> c >>v;
            credits[c - 1] += v;
            debts[d - 1] += v;
        }
        bool res = true;
        for (int i = 0; i < b; i++) {
            if (money[i] + credits[i]<debts[i]) {
                res=false;
            }
        }
        if (res) cout << "S\n";
        else cout << "N\n";
    }
    return 0;

}