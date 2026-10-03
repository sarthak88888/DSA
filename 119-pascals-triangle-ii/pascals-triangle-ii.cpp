class Solution {
public:
    // Returns the requested row of Pascal's Triangle.
    vector<int> getRow(int rowIndex) {
        vector<int> result;
        long long current = 1;
        result.push_back(1);
 
        // Generate each next coefficient from the previous coefficient.
        for (int col = 1; col <= rowIndex; col++) {
            current = current * (rowIndex - col + 1) / col;
 
            // Final values fit in int under the given constraints.
            result.push_back(current);
        }
 
        return result;
    }
};
 