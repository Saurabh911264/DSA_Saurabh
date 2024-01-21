#include<iostream>
#include<vector>
#include<string>
#include <algorithm>
using namespace std;

using namespace std;

    bool isSafe(vector<vector<int>> &m, int n, vector<vector<int>> &isVisited, int x, int y) {
        return (x >= 0 && x < n && y >= 0 && y < n && isVisited[x][y] == 0 && m[x][y] == 1);
    }

    void solve(vector<vector<int>> &m, int n, int x, int y, vector<string> &ans, vector<vector<int>> &isVisited, string path) {
        if (x == n - 1 && y == n - 1) {
            ans.push_back(path);
            return;
        }
        isVisited[x][y] = 1;
        int newx, newy;
        newx = x + 1;
        newy = y;
        if (isSafe(m, n, isVisited, newx, newy)) {
            path.push_back('D');
            solve(m, n, newx, newy, ans, isVisited, path);
            path.pop_back();
        }

        newx = x;
        newy = y + 1;
        if (isSafe(m, n, isVisited, newx, newy)) {
            path.push_back('R');
            solve(m, n, newx, newy, ans, isVisited, path);
            path.pop_back();
        }

        newx = x - 1;
        newy = y;
        if (isSafe(m, n, isVisited, newx, newy)) {
            path.push_back('U');
            solve(m, n, newx, newy, ans, isVisited, path);
            path.pop_back();
        }

        newx = x;
        newy = y - 1;
        if (isSafe(m, n, isVisited, newx, newy)) {
            path.push_back('L');
            solve(m, n, newx, newy, ans, isVisited, path);
            path.pop_back();
        }

        isVisited[x][y] = 0;
    }

    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        if (m[0][0] == 0 || m[n - 1][n - 1] == 0) {
            return ans;
        }

        int x = 0;
        int y = 0;
        string path = "";
        vector<vector<int>> isVisited(n, vector<int>(n, 0));

        solve(m, n, x, y, ans, isVisited, path);

        sort(ans.begin(), ans.end());

        return ans;
    }

int main() {
    
    // Example usage:
    vector<vector<int>> matrix = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {1, 1, 1, 1}
    };
    int size = matrix.size();
    vector<string> result =findPath(matrix, size);
    
    for (const auto &path : result) {
        cout << path << " ";
    }

    return 0;
}
