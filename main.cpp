#include <iostream>
#include <cmath>
using namespace std;

int n;

int main() {
    int a, b, c;
    for (a = 1; a <= n; a++) {
        for (b = a; b <= n; b++) {
            double c_f = sqrt(a*a + b*b);
            if (c_f == static_cast<int>(c_f)) {
                c = static_cast<int>(c_f);
                if (a + b > c && a + c > b && b + c > a) {
                    cout << "Triple pitagórico: " << a << " - " << b << " - " << c << endl;
                }
            }
        }
    }
    return 0;
}
