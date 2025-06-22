#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <tuple>
#include <math.h>
#include <map>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
const double PI = acos(-1);

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, amt, v;
    string s;
    bool start = true;
    while (cin >> n) {
        if (!start) {
            cout<<"\n";
        }
        start = false;
        map<string, int> given;
        map<string, int> received;
        vector<string> people;
        for (int i = 0; i < n; i++) {
            cin >> s;
            people.push_back(s);
            given[s] = 0;
            received[s] = 0;
        }
        for (int i = 0; i < n; i++) {
            cin >> s;
            cin >> amt;
            
            cin >> v;
            int temp =v;
            if (v != 0)  given[s] += (amt/v)*v;
            
            while (v) {
                v--;
                cin >> s;
                received[s] += amt/temp;

            }
        }
        for (auto v:people) {
            cout << v << " " << received[v] - given[v]<< "\n";
        }
    }

}