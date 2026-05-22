class Solution {
  public:
    int cntOnes(vector<vector<int>>& grid) {
        // code here
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        queue<pair<int,int>> q;

        // add boundary 1s
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(i == 0 || j == 0 || i == n-1 || j == m-1) {
                    if(grid[i][j] == 1) {
                        vis[i][j] = 1;
                        q.push({i, j});
                    }
                }
            }
        }

        int dx[4] = {1, -1, 0, 0};
        int dy[4] = {0, 0, 1, -1};

        // BFS
        while(!q.empty()) {
            auto [x, y] = q.front();
            q.pop();

            for(int d = 0; d < 4; d++) {
                int nx = x + dx[d];
                int ny = y + dy[d];

                if(nx >= 0 && ny >= 0 && nx < n && ny < m &&
                   !vis[nx][ny] && grid[nx][ny] == 1) {
                    vis[nx][ny] = 1;
                    q.push({nx, ny});
                }
            }
        }

        // count trapped 1s
        int ans = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 1 && !vis[i][j]) {
                    ans++;
                }
            }
        }

        return ans;
        
    }
};