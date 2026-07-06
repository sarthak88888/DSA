class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        //tramspose the matrix
        for(int i =0;i<n;i++){
            for(int j = i +1 ;j<n; j++){
                //swap
                swap(matrix[i][j],matrix[j][i]);
            }
             //reverse each row
        reverse(matrix[i].begin(), matrix[i].end());
        }
       
    }

};