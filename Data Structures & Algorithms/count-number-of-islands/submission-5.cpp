class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {

        int island = 0;
        int row = grid.size(); //5
        int column = grid[0].size(); //5

        stack<pair<int, int>> st;
        vector<vector<bool>> visited(row, vector<bool>(column, false));


        for(int i = 0; i < row; i++){
            for(int j = 0; j < column; j++){
                if(grid[i][j] == '1' && !visited[i][j]){
                    
                    island++;

                    st.push({i,j});

                    while(!st.empty()){
                        int r = st.top().first;
                        int c = st.top().second;

                        st.pop();
                        //border ?
                        if(r < 0 || c < 0 || r >= row || c >= column){
                            continue;
                        }
                        //visited ?
                        if(visited[r][c]){
                            continue;
                        }
                        //air ?
                        if(grid[r][c] == '0'){
                            continue;
                        }

                        visited[r][c] = true;

                        st.push({r + 1, c});
                        st.push({r - 1, c});
                        st.push({r, c + 1});
                        st.push({r, c - 1});


                    }
                }
            }
        }

        return island;
    }
};
