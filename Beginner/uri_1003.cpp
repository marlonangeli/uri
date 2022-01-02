#include <iostream>
#define PI 3.14159

using namespace std;

int main() {
    double radio, area;
    cin >> radio;
    area = PI * radio * radio;
    cout.precision(4);
    cout << "A=" << fixed << area << endl;

    return 0;
}
