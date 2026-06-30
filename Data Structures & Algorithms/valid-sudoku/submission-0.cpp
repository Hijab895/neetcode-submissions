class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int row=0;row<9;row++){
            unordered_set<char>seen;
            for(int i=0;i<9;i++){
                if(board[row][i]=='.'){
                    continue;
                }
                else if(seen.count(board[row][i])){
                    return false;
                }
                else{
                    seen.insert(board[row][i]);
                }
            }
        }
        for(int col=0;col<9;col++){
            unordered_set<char>seen;
            for(int j=0;j<9;j++){
                if(board[j][col]=='.'){
                    continue;
                }
                else if(seen.count(board[j][col])){
                    return false;
                }
                else{
                    seen.insert(board[j][col]);
                }
            }
        }
        for(int rowstart=0;rowstart<9;rowstart+=3){
            for(int colstart=0;colstart<9;colstart+=3){
                unordered_set<char>seen;
                for(int i=rowstart;i<rowstart+3;i++){
                    for(int j=colstart;j<colstart+3;j++){
                        if(board[i][j]=='.'){
                            continue;
                        }
                        else if (seen.count(board[i][j])){
                            return false;
                        }
                        else{
                            seen.insert(board[i][j]);
                        }
                    }
                }
            }
        }
        return true;
    }
};
