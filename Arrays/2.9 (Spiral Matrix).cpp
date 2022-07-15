class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;

        int row = matrix.size();
        int col = matrix[0].size();
        
        
        int l = 0, r = col-1, t = 0, b = row-1;
        int dir = 0;
        while(l<=r && t <= b){
            if(dir==0){
                for(int i = l ; i <= r ; i++){
                    ans.push_back(matrix[t][i]);
                }
                dir=1;
                t++;
            }
            else if(dir==1){
                for(int i = t ; i <= b ; i++){
                    ans.push_back(matrix[i][r]);
                }
                dir=2;
                r--;
            }
            else if(dir==2){
                for(int i = r ; i >= l  ; i--){
                    ans.push_back(matrix[b][i]);
                }
                dir=3;
                b--;
            }
            else if(dir==3){
                for(int i = b ; i >= t ; i--){
                    ans.push_back(matrix[i][l]);
                }
                dir=0;
                l++;
            }
        }
        return ans;
        
    }
};
