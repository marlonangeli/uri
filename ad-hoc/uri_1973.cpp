#include <iostream>

using namespace std;

int main() {
    int numberPlanets, numberPlanetsVisited = 0, position = 0, flag;
    long long int remainingSheep = 0;
    cin >> numberPlanets;
    int *qtdSheep = new int[numberPlanets];
    int *planetsVisited = new int[numberPlanets];

    for (int i = 0; i < numberPlanets; i++)
        cin >> qtdSheep[i];

    while (true) {
        planetsVisited[position] = 1;
        if ((qtdSheep[position]) % 2 == 0) {
            position--;
            flag = 1;
        }
        else {
            position++;
            flag = -1;
        }
        if (qtdSheep[position + flag] > 0) {
            qtdSheep[position + flag]--;
        }

        if (position < 0 or position >= numberPlanets) break;
    }

    for (int i = 0; i < numberPlanets; i++) {
        numberPlanetsVisited += planetsVisited[i];
        remainingSheep += qtdSheep[i];
    }

    cout << numberPlanetsVisited << " " << remainingSheep << endl;

    return 0;
}
