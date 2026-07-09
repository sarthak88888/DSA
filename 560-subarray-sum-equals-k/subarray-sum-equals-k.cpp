class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        //size of array
        int n = arr.size();


        unordered_map<int,int> prefixSumCount;

        //initialoze prefix sum and count of subaray
        int prefixSum = 0;
        int count = 0;

        //base case
        prefixSumCount[0] = 1;
        //traverse through the array
        for(int i =0;i<n; i++){
            prefixSum +=arr[i];
            
            int remove = prefixSum -k;

            //if sum seen add count to result
            if(prefixSumCount.find(remove)!=prefixSumCount.end()){
                count += prefixSumCount[remove];
            }
            //updare the frequency
            prefixSumCount[prefixSum]++;
        }
        return count;

        
    }
};