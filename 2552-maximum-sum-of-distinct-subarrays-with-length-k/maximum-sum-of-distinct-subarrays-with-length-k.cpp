
class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {

        int n = nums.size();

        unordered_map<int, int> freq;

        long long sum = 0;
        long long maxSum = 0;

        // Build the first window
        for (int i = 0; i < k; i++) {
            sum += nums[i];
            freq[nums[i]]++;
        }

        // Check whether first window has distinct elements
        if (freq.size() == k) {
            maxSum = sum;
        }

        // Slide the window
        for (int right = k; right < n; right++) {

            // Remove outgoing element
            int outgoing = nums[right - k];

            sum -= outgoing;
            freq[outgoing]--;

            // Remove key if frequency becomes zero
            if (freq[outgoing] == 0) {
                freq.erase(outgoing);
            }

            // Add incoming element
            int incoming = nums[right];

            sum += incoming;
            freq[incoming]++;

            // Update answer only if all elements are distinct
            if (freq.size() == k) {
                maxSum = max(maxSum, sum);
            }
        }

        return maxSum;
    }
};
