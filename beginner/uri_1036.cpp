#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double A, B, C, delta, r1, r2;
    cin >> A >> B >> C;

    delta = pow(B, 2) - 4 * A * C;
    if (delta <= 0 or A == 0)
        cout << "Impossivel calcular" << endl;
    else {
        r1 = (-B + sqrt(delta)) / (2 * A);
        r2 = (-B - sqrt(delta)) / (2 * A);
        cout.precision(5);
        cout << "R1 = " << fixed << r1 << endl;
        cout << "R2 = " << fixed << r2 << endl;
    }

    return 0;
}