class Solution {
public:

    bool dfs(int node, int clr, vector<int>& color, vector<vector<int>>& graph) {

        color[node] = clr;

        for (int neighbour : graph[node]) {

            // Not visited
            if (color[neighbour] == -1) {

                if (!dfs(neighbour, 1 - clr, color, graph))
                    return false;
            }

            // Already visited
            else if (color[neighbour] == clr) {

                return false;
            }
        }

        return true;
    }

    bool isBipartite(vector<vector<int>>& graph) {

        int n = graph.size();

        vector<int> color(n, -1);

        // Handle disconnected graph
        for (int i = 0; i < n; i++) {

            if (color[i] == -1) {

                if (!dfs(i, 0, color, graph))
                    return false;
            }
        }

        return true;
    }
};