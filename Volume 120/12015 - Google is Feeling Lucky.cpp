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
    int t, n;
    string s;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int maximum_relevance = 0;
        vector<string> values;
        cout << "Case #" << i+1<< ":\n";
        for (int j = 0; j < 10; j++) {
            cin >> s >> n;
            if (n > maximum_relevance) {
                maximum_relevance = n;
                values.clear();
                values.push_back(s);
            } else if (n == maximum_relevance) {
                values.push_back(s);
            }
        }
        for (auto s:values) {
            cout << s << "\n";
        }
    }

}