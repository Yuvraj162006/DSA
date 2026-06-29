class Solution {
public:
    void dfs(int i, int j, vector<vector<int>>& grid, int n, int m) {

        // Base Case for boundary
        if (i < 0 || i >= n || j < 0 || j >= m)
            return;

        if (grid[i][j] == 0)
            return;

        // Mark as visited by converting land to water
        grid[i][j] = 0;

        // Explore all 4 directions
        dfs(i - 1, j, grid, n, m); // Up
        dfs(i + 1, j, grid, n, m); // Down
        dfs(i, j - 1, grid, n, m); // Left
        dfs(i, j + 1, grid, n, m); // Right
    }

    int numEnclaves(vector<vector<int>>& grid) {

        int n = grid.size();
        int m = grid[0].size();

        // Step 1: Remove boundary-connected land

        // First and Last Column
        for (int i = 0; i < n; i++) {
            if (grid[i][0] == 1)
                dfs(i, 0, grid, n, m);

            if (grid[i][m - 1] == 1)
                dfs(i, m - 1, grid, n, m);
        }

        // First and Last Row
        for (int j = 0; j < m; j++) {
            if (grid[0][j] == 1)
                dfs(0, j, grid, n, m);

            if (grid[n - 1][j] == 1)
                dfs(n - 1, j, grid, n, m);
        }

        // Step 2: Count remaining land
        int count = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1)
                    count++;
            }
        }

        return count;
    }
};