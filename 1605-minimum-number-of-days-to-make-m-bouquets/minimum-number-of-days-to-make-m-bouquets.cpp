class Solution {
public:

    bool possible(vector<int>& arr, int day, int m, int k) {

        int n = arr.size();
        int cnt = 0;
        int bouquets = 0;

        for (int i = 0; i < n; i++) {

            if (arr[i] <= day) {

                cnt++;

                if (cnt == k) {
                    bouquets++;
                    cnt = 0;
                }

            } else {

                // Flower has not bloomed, reset consecutive count
                cnt = 0;
            }
        }

        return bouquets >= m;
    }


    int minDays(vector<int>& arr, int m, int k) {

        long long total = 1LL * k * m;

        // Not enough flowers
        if (total > arr.size()) {
            return -1;
        }

        // Find minimum and maximum bloom day
        int mini = *min_element(arr.begin(), arr.end());
        int maxi = *max_element(arr.begin(), arr.end());

        // Binary search on days
        int s = mini;
        int e = maxi;
        int result = -1;

        while (s <= e) {

            int mid = s + (e - s) / 2;

            if (possible(arr, mid, m, k)) {

                // This day works, try an earlier day
                result = mid;
                e = mid - 1;

            } else {

                // This day doesn't work, try a later day
                s = mid + 1;
            }
        }

        return result;
    }
};