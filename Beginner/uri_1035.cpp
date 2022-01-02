#include <iostream>

using namespace std;

int main() {
    int A, B, C, D, accepted = 0;

    cin >> A >> B >> C >> D;
    if (B > C and D > A)
        if ((C +  D) > (A + B))
            if (C > 0 and D > 0 and A % 2 == 0)
                accepted = 1;

    if (accepted)
        cout << "Valores aceitos" << endl;
    else
        cout << "Valores nao aceitos" << endl;

    return 0;
}
