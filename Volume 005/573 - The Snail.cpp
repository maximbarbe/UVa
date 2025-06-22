#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <tuple>
#include <math.h>
using namespace std;


#define all(x) begin(x), end(x);

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
const double PI = acos(-1);

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int h, d, f, days;
    double loss, prev, u, height;
    while (true) {
        cin >> h >> u >> d >> f;
        if (h == 0) {
            break;
        }
        loss = u * (double)f/100.0;
        height = 0;
        days = 0;
        while (true) {
            days ++;
            height += u;

            if (height > h) {
                printf("success on day %d\n", days);
                break;
            }
            height -= d;
            u = max(0.0, u - loss);
            if (height < 0) {
                printf("failure on day %d\n", days);
                break;
            }


        }
    }
}