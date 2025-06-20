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
    int t, n,res;
    int c = 0;
    while (1) {
        c ++;
        res = 0;
        cin >> t;
        if (t == 0) break;
        
        for (int i = 0; i < t; i++) {
            cin >> n;
            if (n == 0) {
                res --;
            } else {
                res ++;
            }
        }
        printf("Case %d: %d\n", c, res);
    }
    

}