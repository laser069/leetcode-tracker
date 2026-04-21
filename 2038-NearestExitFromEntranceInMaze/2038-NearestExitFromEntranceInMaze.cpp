// Last updated: 4/21/2026, 2:51:15 PM
class Solution {
public:
    bool isBoundary(int n, int m, int i, int j) {
        return i == 0 || i == n - 1 || j == 0 || j == m - 1;
    }

    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int count = 0;
        int n = maze.size();
        int m = maze[0].size();
        int ex = entrance[0];
        int ey = entrance[1];
        queue<pair<int, int>> q;
        q.push({ex,ey});
        maze[ex][ey] = '+';
        int dir[4][2] = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
        while (!q.empty()) {

            int size = q.size();

            for (int k = 0; k < size; k++) {

                auto [x, y] = q.front();

                q.pop();

                if (isBoundary(n, m, x, y) &&
                    !(x == ex && y == ey))
                    return count;

                for (auto& d : dir) {

                    int x1 = x + d[0];
                    int y1 = y + d[1];

                    if (x1 < 0 || x1 >= n || y1 < 0 || y1 >= m)
                        continue;

                    if (maze[x1][y1] == '.') {
                        q.push({x1, y1});
                        maze[x1][y1] = '+';
                    }
                }
            }
            count++;
        }
        return -1;
    }
};