class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        for(int i =0; i < numRows; i++){
            //create a row with size(i+1) and initialize all elements to 1
            vector <int> row(i+1,1);
            //fill elements from index 1 to i-1
            for(int j =1; j<i;j++){
                //each element = sum of two elements above
                row[j] = triangle[i-1][j-1] + triangle[i-1][j];

            }
            triangle.push_back(row);
        }

        return triangle;
    }
};