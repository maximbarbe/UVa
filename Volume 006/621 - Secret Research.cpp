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
    int n;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (s == "1" || s == "4" || s == "78"){
            cout << "+" << endl;
        } else if (s.substr(s.size() -2, s.size()) == "35") {
            cout << "-" << endl;
        } else if (s[0] == '9' && s[s.size() - 1] == '4') {
            cout << "*" << endl;
        } else {
            cout << "?" << endl;
        }
    }    

}