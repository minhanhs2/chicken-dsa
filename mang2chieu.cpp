#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    int Q = 0;

        for (int j = 0; j < n; ++j) {
        bool allOnes = true;

        for (int i = 0; i < n; ++i) {
            if (matrix[i][j] == 0) {
                allOnes = false;
                break;
            }
        }

        if (allOnes) {
            Q++;
        }
    }

    cout << Q << endl;

    return 0;
}
