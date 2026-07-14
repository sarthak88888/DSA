class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
          int n = nums.size();
          //list of answers
          vector <int> results;

          unordered_map<int,int> mpp;
          //list ocurrence of the majority element
          int mini = int(n/3)+1;

          for (int i =0; i<n;i++){
            mpp[nums[i]]++;
            //check majority 
            if(mpp[nums[i]] == mini){
                results.push_back(nums[i]);
            }
            if(results.size()==2){
                break;
            }
          }
            return results;
    
    }
};