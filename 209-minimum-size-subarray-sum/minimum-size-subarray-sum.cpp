
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int sum = 0;
        int minLength = INT_MAX;

        for (int j = 0; j < n; j++) {

            sum += nums[j];

            while (sum >= target) {

                minLength = min(minLength, j - i + 1);

                sum -= nums[i];

                i++;
            }
        }

        if (minLength == INT_MAX) {
            return 0;
        }

        return minLength;
    }
};
