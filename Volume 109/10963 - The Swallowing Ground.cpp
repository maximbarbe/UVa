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
    int n, w, y1, y2;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin.ignore();
        cin >> w;
        int diff = 300;
        bool res = true;
        for (int j = 0; j < w; j++) {
            cin >> y1 >> y2;
            if (diff == 300) {
                diff = y1 - y2;
            } else {
                if (diff != y1 - y2) {
                    res = false;
                }
            }
        }
        if (res) cout << "yes\n";
        else cout << "no\n";
        if (i != n-1) cout << "\n";
    }

}