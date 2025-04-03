class Solution {
public:
bool check[9][9] = {};
bool col[9][9] = {};
bool row[9][9] = {};
    bool isValidSudoku(vector<vector<char>>& board) {
        for ( int i = 0 ; i < 3 ; i ++ ){ 
            for ( int j = 0 ; j < 3 ; j ++ ){  
                for ( int k = 0 ; k < 3 ; k ++ ){ 
                    for ( int p = 0 ; p < 3 ; p ++ ){ 
                        if ( board[i*3+k][j*3+p] == '.' ) continue;
                        int val = board[i*3+k][j*3+p] - '1';
                        if ( row[i*3+k][val] ) return false;
                            row[i*3+k][ val ] = true;
                        if ( col[j*3+p][val] ) return false;
                            col[j*3+p][val] = true;
                        if ( check[i*3+j][val] ) return false;
                            check[i*3+j][val] = true;
                    }
                }
            }
        }
        return true;
    }
};
