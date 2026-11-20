class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int time = 0, freshCount = 0;
        queue<pair<int, int>> q;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] == 2){
                    q.push({i, j});
                }
                else if(grid[i][j] == 1){
                    freshCount++;
                }
            }
        }
        if(freshCount == 0){
            return 0;
        }

        vector<vector<int>> dirs = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        while(!q.empty() && freshCount){
            int len = q.size();
            while(len--){
                int row = q.front().first;
                int col = q.front().second;
                q.pop();
                for(int i=0; i<4; i++){
                    int nr = row + dirs[i][0];
                    int nc = col + dirs[i][1];
                    if(nr<0 || nc<0 || nr>=m || nc>=n || grid[nr][nc] != 1){
                        continue;
                    }
                    freshCount--;
                    grid[nr][nc] = 2;
                    q.push({nr, nc});
                }
            }
            time++;
        }
        
        return freshCount == 0 ? time : -1;
    }
};