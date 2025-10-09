#include <bits/stdc++.h>
using namespace std;

int canCapture(int x1, int y1, int x2, int y2, string piece1, string piece2) {
    if (piece1 == "BISHOP") {
        return abs(x1 - x2) == abs(y1 - y2);
    }
    else if (piece1 == "ROOK") {
        return x1 == x2 || y1 == y2;
    }
    else if (piece1 == "QUEEN") {
        return (x1 == x2 || y1 == y2 || abs(x1 - x2) == abs(y1 - y2));
    }
    else if (piece1 == "KNIGHT") {
        return ((abs(x1 - x2) == 2 && abs(y1 - y2) == 1) ||
                (abs(x1 - x2) == 1 && abs(y1 - y2) == 2));
    }
    else if (piece1 == "PAWN") {
    return ((x2 == x1 + 1 || x2 == x1 - 1) && 
            (y2 == y1 + 1 || y2 == y1 - 1));
    }
}

int main() {
    string line;
    getline(cin, line);
    for (char c : line)
        if (c == ',') c = ' ';

    stringstream ss(line);
    int x1, y1, x2, y2;
    string piece1, piece2;
    ss >> x1 >> y1 >> x2 >> y2 >> piece1 >> piece2;

    cout << canCapture(x1, y1, x2, y2, piece1, piece2);
    return 0;
}
