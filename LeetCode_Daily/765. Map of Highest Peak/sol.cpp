class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int m = isWater.size();
        int n = isWater[0].size();
        // 初始化高度数组为-1
        vector<vector<int>> heights(m, vector<int>(n, -1)); 
        queue<pair<int, int>> q;
        
        // 将所有水域格子的高度设为0，并加入队列
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(isWater[i][j] == 1) {
                    heights[i][j] = 0;
                    q.push({i, j});
                }
            }
        }
        
        // 四个方向：上、右、下、左
        vector<pair<int, int>> dirs = {{-1,0}, {0,1}, {1,0}, {0,-1}};
        
        // BFS 分配高度
        while(!q.empty()) {
            auto [x, y] = q.front();
            q.pop();
            
            // 检查所有相邻格子
            for(auto [dx, dy] : dirs) {
                int nx = x + dx;
                int ny = y + dy;
                
                // 检查新位置是否有效且未分配高度
                if(nx >= 0 && nx < m && ny >= 0 && ny < n && heights[nx][ny] == -1) {
                    heights[nx][ny] = heights[x][y] + 1;
                    q.push({nx, ny});
                }
            }
        }
        
        return heights;
    }
};