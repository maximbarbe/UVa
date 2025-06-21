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
    int duration, n, month;
    double down, amount, depreciation;
    while (true) {
        vector<float> dep;
        
        
        cin >> duration >> down >> amount >> n;
        if (duration < 0) {
            break;
        }
        dep.assign(duration + 1, 1);
        int months = 0;
        for (int i = 0; i < n; i++) {
            cin >> month >> depreciation;
            dep[month] = depreciation;
        }
        double carValue =  amount + down;
        double payments = amount / (double)duration;
        float curRate = 1;
        while (true) {
            if (dep[months] != 1) {
                curRate = dep[months];
            }
            carValue = carValue * (1-curRate);
            
            
            if (carValue > amount ) {
                break;
            }
            amount -= payments;
            
            months ++;
        }


        if (months == 1)cout << months << " month" << endl;
        else cout << months << " months" << endl;
        
    }

}