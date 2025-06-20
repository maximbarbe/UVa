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
    int t;
    cin >> t;
    string s;
    for (int i = 0; i < t; i++) {
        cin >> s;
        if (s.size() == 5) {
            cout << 3 << endl;
        } else {
            if (s[0] == 't' && s[1] == 'w' || s[0] == 't' && s[2] == 'o' || s[1] == 'w' && s[2] == 'o') {
                cout << 2 << endl;
            } else {
                cout << 1 << endl;
            }
        }
    }    

}