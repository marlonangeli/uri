#include <iostream>

using namespace std;

int main() {
    int input, hour, minute, second;
    cin >> input;

    hour = input / 3600;
    input = input % 3600;
    minute = input / 60;
    input = input % 60;
    second = input;

    cout << hour << ":" << minute << ":" << second << endl;

    return 0;
}
