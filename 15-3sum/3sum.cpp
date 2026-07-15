class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        //store final result
        vector<vector<int>> ans;
        //firat loop
        for(int i =0;i<n;i++){
            //skip duplicate for first element
            if(i>0 && nums[i]== nums[i-1])continue;
            //two pointer
            int left = i+1, right = n-1;
            //find pair for current arr[i]
            while(left<right){
                int sum = nums[i] + nums[left] + nums[right];
                if(sum == 0){
                    ans.push_back({nums[i],nums[left],nums[right]});
                    left++,right--;
                    //skip the duplicate
                    while(left<right && nums[left] == nums[left-1])left++;
                    // Skip duplicates for right 
                    while (left < right && nums[right] == nums[right + 1]) right--;
                }
                else if(sum <0)left++;
                else right --;
            }
        }
        return ans;
    }
};