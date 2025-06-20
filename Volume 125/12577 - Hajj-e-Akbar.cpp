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
    
    string s;
    int c = 0;
    while (true) {
        c ++ ;
        cin >> s;
        if (s == "*") break;
        if (s== "Hajj") cout << "Case " << c << ": Hajj-e-Akbar" << endl;
        if (s=="Umrah") cout << "Case " << c << ": Hajj-e-Asghar" << endl;
    }
}