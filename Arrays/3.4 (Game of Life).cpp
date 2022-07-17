class Solution {
public:
    bool isValidNeighbour(int x,int y ,vector<vector<int>>& board){
        return (x>= 0 && x < board.size() && y >= 0 && y <board[0].size());
    }
    
    void gameOfLife(vector<vector<int>>& board) {
        vector<int> dx = {0,0,1,1,1,-1,-1,-1};
        vector<int> dy = {1,-1,1,-1,0,0,1,-1};
        
        for(int r = 0 ; r < board.size() ; r++){
            for(int c = 0 ; c < board[0].size() ; c++){
                
                int count_live_neighbours = 0;
                
                for(int i = 0 ; i < 8 ; i++){
                    int curr_x = r + dx[i];
                    int curr_y = c + dy[i];
                    if(isValidNeighbour(curr_x,curr_y,board) && abs(board[curr_x][curr_y]) == 1)
                        count_live_neighbours++;
                }
                
                if(board[r][c] == 1 && (count_live_neighbours < 2 || count_live_neighbours > 3))
                    board[r][c] = -1;
                    
                 if(board[r][c] == 0 && count_live_neighbours == 3)
                    board[r][c] = 2; 
            }   
        }
                    
        for(int r = 0 ; r < board.size() ; r++){
            for(int c = 0 ; c < board[0].size() ; c++){
                if(board[r][c] >= 1)
                    board[r][c] = 1;
                else
                    board[r][c] = 0;      
            }
        }
         
        
    }
};
