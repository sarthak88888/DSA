class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maximum =*max_element(nums.begin(),nums.end());
        vector<int> pos;
        long long answer =0;
        for(int right=0;right<nums.size();right++){
            if(nums[right]==maximum){
                pos.push_back(right);
            }
            if(pos.size()>=k){
                answer += pos[pos.size()-k]+1;
            }
        }
        return answer;
    }
};