class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int cols = matrix[0].size();
        int total = row*cols;
        int s = 0;
        int e = total -1;
        while(s<= e){
            int mid =(s+e)/2;
            //convert rowindex into rowIndex, colIndex
            int rowIndex = mid/ cols;
            int colIndex = mid% cols;

            if( matrix[rowIndex][colIndex] == target){
                return true;
            }
            if(target > matrix[rowIndex][colIndex]){
                //right
                s= mid+1;
            }
            else{
                e = mid-1;
            }
        }
        return false;
    }
};