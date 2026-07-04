class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        // result array
        vector<int> ans(n);

    //next even index for positive number 
    int posIndex = 0;
    // odd index
    int negIndex = 1;

    for(int i =0; i< n; i++){
        if(nums[i] >0){
            ans[posIndex] = nums[i];
            posIndex +=2;
        }
        else{
            ans[negIndex] = nums[i];
            negIndex +=2;
        }
    }
    return ans;
    }
};