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
    int t,l,w,h;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> l >> w >> h;
        if (l > 20 || w > 20 || h > 20) {
            printf("Case %d: bad\n", i+1);
        } else {
            printf("Case %d: good\n", i+1);
        }
    }

}