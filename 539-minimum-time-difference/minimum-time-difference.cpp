class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {

        vector<int> minutes;   // ✅ correct name

        // 1) Convert time "HH:MM" to total minutes
        for (int i = 0; i < timePoints.size(); i++) {
            string curr = timePoints[i];

            int hours = stoi(curr.substr(0, 2));
            int mins  = stoi(curr.substr(3, 2));

            int totalMinutes = hours * 60 + mins;
            minutes.push_back(totalMinutes);
        }

        // 2) Sort the minutes
        sort(minutes.begin(), minutes.end());

        int mini = INT_MAX;
        int n = minutes.size();   // ✅ you forgot to define n

        // 3) Find minimum difference between consecutive times
        for (int i = 0; i < n - 1; i++) {   // ✅ should go till n-2
            int diff = minutes[i + 1] - minutes[i];
            mini = min(mini, diff);
        }

        // 4) Check circular difference (last to first)
        int lastDiff = (minutes[0] + 1440) - minutes[n - 1];
        mini = min(mini, lastDiff);

        return mini;
    }
};
