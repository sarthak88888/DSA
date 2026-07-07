class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        //store final result
        vector <int> result;
        // get no. of rows and columns
        int top = 0;
        int bottom = matrix.size()-1;
        int left = 0;
        int right = matrix[0].size()-1; 
        //traverse the matrix i spral order
        while(top<= bottom && left <= right){

            //traverse from left to right
            for(int i = left; i<= right; i++){
                result.push_back(matrix[top][i]);
            }
            top++;
            for(int i = top; i<=bottom; i++){
                result.push_back(matrix[i][right]);
            }
            right--;
            //check if there are rows remaining
            if(top<=bottom){
                //traverse from right to left on th bottom row
                for(int i = right; i>=left; i--){
                    result.push_back(matrix[bottom][i]);
                }
                bottom --;
            } 
            //check if there are colums remain
            if(left <= right){
                //traverse from bottom to top on the left column
                for(int i = bottom; i>= top; i--){
                    result.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return result;

    }
};