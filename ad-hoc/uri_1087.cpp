#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool stop_statement(const vector<int>&);
bool valid_movement(const vector<int>&);
vector<int> create_vector(int, int, int, int);
int number_of_movements(vector<int>&);

int main() {
    int x1, y1, x2, y2;
    vector<int> positions;

    while (true) {
        cin >> x1 >> y1 >> x2 >> y2;
        positions = create_vector(x1, y1, x2, y2);

        if (stop_statement(positions)) break;
        if (!valid_movement(positions)) {
            cout << "Invalid movement" << endl;
            continue;
        }

        cout << number_of_movements(positions) << endl;
    }

    return 0;
}

bool stop_statement(const vector<int>& vector) {
    for (int i: vector)
        if (i != 0) return false;
    return true;
}

bool valid_movement(const vector<int>& vector) {
    for (int i: vector)
        if (1 > i or i > 8) return false;
    return true;
}

vector<int> create_vector(int a, int b, int c, int d) {
    vector<int> vector;
    vector.push_back(a);
    vector.push_back(b);
    vector.push_back(c);
    vector.push_back(d);
    return vector;
}

bool same_position(const vector<int>&);

bool same_position(const vector<int>& vector) {
    if (vector[0] == vector[2] and vector[1] == vector[3]) return true;
    return false;
}

int number_of_movements(vector<int> &vector) {
    if (same_position(vector)) return 0; // case base

    bool diagonal = abs(vector[0] - vector[2]) == abs(vector[1] - vector[3]);
    if (diagonal) {
        vector[0] = vector[2];
        vector[1] = vector[3];
        return 1;
    }
    if (vector[0] != vector[2]) { // vertical movement
        vector[0] = vector[2];
        return 1 + number_of_movements(vector);
    }
    if (vector[1] != vector[3]) { // horizontal movement
        vector[1] = vector[3];
        return 1 + number_of_movements(vector);
    }
}
