class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();

        if(n==0){
            return 0;
        }
        long long maxProduct = nums[0];

        for(int start =0; start <n; start++){
            long long currentProduct =1;

            for(int end = start; end<n; end++){
                currentProduct *=nums[end];

                if(currentProduct> maxProduct){
                    maxProduct = currentProduct;
                }
            }
        }
        return (int)maxProduct;
    }
};