#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int X, Y, M, Xi, Yi;
    // cin >> X >> Y >> M not works in URI judge
    while (scanf("%d %d %d", &X, &Y, &M) != EOF) {
        if (M <= 10e+5 and (X > 0 and X <= 64) and (Y > 0 and Y <= 64)) {
            while (M--) {
                cin >> Xi >> Yi;

                if ((Xi > 0 and Xi <= 64) and (Yi > 0 and Yi <= 64)) {
                    if ((Xi <= X and Yi <= Y) or (Xi <= Y and Yi <= X))
                        cout << "Sim" << endl;
                    else
                        cout << "Nao" << endl;
                } else
                    cout << "Nao" << endl;
            }
        }
    }

    return 0;
}
