class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j =0 ; // pointer to place the next to non-zero element
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
           //swap current element ko with element at index
           swap(nums[i],nums[j]);

           j++;
            }
        }
    }
};