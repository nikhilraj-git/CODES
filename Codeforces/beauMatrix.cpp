#include <iostream>
#include <vector>
using namespace std;

void takeInput(vector<vector<int>> &v, int &x, int &y) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> v[i][j];
            if (v[i][j] == 1) {
                x = i + 1;
                y = j + 1;
                return;
            }
        }
    }
}

int main() {
    vector<vector<int>> v(5, vector<int>(5));
    int xInd, yInd; 
    takeInput(v, xInd, yInd);
    int ans = abs(xInd - 3) + abs(yInd - 3);
    cout << ans;

    return 0;
}
