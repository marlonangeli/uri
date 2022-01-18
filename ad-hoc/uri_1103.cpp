#include <iostream>

using namespace std;

bool is_hour(int);
bool is_minute(int);

int main() {
    int h1, h2, m1, m2, sleep_time_in_minutes;

    while (true) {
        cin >> h1 >> m1 >> h2 >> m2;
        if (h1 == 0 and m1 == 0 and h2 == 0 and m2 == 0) {
            break;
        }
        if (is_hour(h1) and is_hour(h2) and is_minute(m1) and is_minute(m2)) {
            sleep_time_in_minutes = (h2 - h1) * 60 + (m2 - m1);
            if (sleep_time_in_minutes < 0) {
                sleep_time_in_minutes += 24 * 60;
            }
            cout << sleep_time_in_minutes << endl;
        } else {
            cout << "Bad format" << endl;
        }
    }

    return 0;
}

bool is_hour(int h) {
    return (0 <= h and h <= 23);
}

bool is_minute(int m) {
    return (0 <= m and m <= 59);
}
