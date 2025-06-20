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


const double PI = acos(-1);

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        n = (n * 63 + 7492)*5 - 498;
        n = abs(n);
        cout << (n/10)%10<<endl;
    }

}