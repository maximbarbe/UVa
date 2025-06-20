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
    
    int k, n, m, x, y;
    while (true) {
        cin >> k;
        if (k ==0) {
            break;
        }
        cin >> n >> m;
        for (int i = 0; i < k; i++) {
            cin >> x >> y;
            if (x == n || y ==m) {
                cout << "divisa"<<endl;
            } else if(x > n && y > m) {
                cout << "NE" << endl;
            } else if (x < n && y > m) {
                cout << "NO" << endl;
            } else if (x > n && y < m) {
                cout << "SE" << endl;
            } else {
                cout << "SO" <<endl;
            }
        }
    }
}