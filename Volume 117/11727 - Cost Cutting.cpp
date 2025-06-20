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
    int t, a, b, c;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        cin >> a >> b >> c;
        vi v = {a, b, c};
        sort(v.begin(), v.end());
        printf("Case %d: %d\n", i+1, v[1]);
    }

}