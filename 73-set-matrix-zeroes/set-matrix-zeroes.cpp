class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
      int m = matrix.size();
      int n = matrix[0].size();
      //create row marker array
      vector<int> row(m,0);
      //create col marker array
      vector<int> col(n,0);
      //first pass mark each row and col need to be zero
      for(int i =0;i<m;i++){
        for(int j = 0;j<n;j++){
            //if find zero mark it
            if(matrix[i][j] == 0){
                row[i] = 1;
                 col[j]= 1;
            }
        }
      }
      //second pass
      for(int i =0; i<m;i++){
        for(int j =0;j<n;j++){
            if(row[i]==1 || col[j]==1){
                matrix[i][j] =0;
            }
        }
      }
    }
};