class Solution {
public:
    bool circularArrayLoop(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            vector<bool> visited(n, false);
            int curr = i;
            bool forward = nums[i] > 0;

            while (true) {
                if ((nums[curr] > 0) != forward)
                    break;

                int next = ((curr + nums[curr]) % n + n) % n;

                if (next == curr)
                    break;

                if (visited[next])
                    return true;

                visited[curr] = true;
                curr = next;
            }
        }

        return false;
    }
};