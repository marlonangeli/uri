#include <iostream>

using namespace std;

int main() {
    int a, b, q, r;

    cin >> a >> b;

    q = a / b;
    r = a % b;
    if (r < 0) {
        if (b > 0) {
            q--;
            r += b;
        } else {
            q++;
            r -= b;
        }
    }

    cout << q << " " << r << endl;

    return 0;
}
