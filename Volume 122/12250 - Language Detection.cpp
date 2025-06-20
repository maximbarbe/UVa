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
    string s, res;
    int c = 0;
    while (true) {
        cin >> s;
        if (s == "#") {
            break;
        }
        c ++;
        if (s=="HELLO") {
            res = "ENGLISH";
        } else if (s == "HOLA") {
            res = "SPANISH";
        } else if (s=="HALLO") {
            res = "GERMAN";
        } else if (s=="BONJOUR") {
            res = "FRENCH";
        } else if (s=="CIAO") {
            res="ITALIAN";
        } else if (s=="ZDRAVSTVUJTE") {
            res = "RUSSIAN";
        } else {
            res = "UNKNOWN";
        }
        cout << "Case " << c << ": "<<res<<endl;
    }

}