class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        
        int index1 =0;
        int index2 =n-1;
        while(index1<index2){
            if(nums[index1]+nums[index2]> target){
                index2--;
            }else if(nums[index1]+nums[index2]== target){
                return{index1+1,index2+1};
            }else{
                index1++;
            }
        }
        return{};
       
        
    }
};