#include <iostream>

using namespace std;

int main() {
    int hInitial, mInitial, hFinal, mFinal;
    cin >> hInitial >> mInitial >> hFinal >> mFinal;

    int h = hFinal - hInitial;
    int m = mFinal - mInitial;

    if (m < 0) {
        h--;
        m += 60;
    }
    if (h < 0 or (h == 0 and m == 0)) {
        h += 24;
    }
    cout << "O JOGO DUROU " << h << " HORA(S) E " << m << " MINUTO(S)" << endl;

    return 0;
}
