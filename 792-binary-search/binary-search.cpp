class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int s = 0;
        int e = n-1;
        while(s<=e){
            //find mid
            int mid = (s+e)/2;
            //step2: check mid
            if(nums[mid]== target){
                return mid;
            }
            if(target < nums[mid]){
                e = mid-1;
            }
            else{
                s =mid+1;
            }
        }
        return -1;
    }
};