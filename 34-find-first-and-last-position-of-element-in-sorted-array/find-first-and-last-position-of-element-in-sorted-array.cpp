class Solution {
public:
int lastOccurence(vector<int>& nums, int target) { 
    int n = nums.size();
    int s =0;
    int e = n-1;
    int ans = -1;

    while(s <=e){
        int mid =(s+e)/2;

        if(nums[mid] == target){
            //store n compute
            ans =mid;
            //right
            s=mid+1;

        }
     else if(target < nums[mid]){
            //left
            e =mid -1;
        }
        else {
            s = mid+1;
        }
    }
    return ans;
}
int firstOccurence(vector<int>& nums, int target){ 
    int n = nums.size();
    int s =0;
    int e = n-1;
    int ans = -1;

    while(s <=e){
        int mid =(s+e)/2;

        if(nums[mid] == target){
            //store n compute
            ans =mid;
            //left
            e =mid -1;

        }
       else  if(target < nums[mid]){
            //left
            e =mid -1;
        }
        else {
            s = mid+1;
        }
    }
    return ans;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = firstOccurence(nums,target);
        int last = lastOccurence(nums,target);
        vector<int> temp;
        temp.push_back(first);
        temp.push_back(last);
        return temp;
    }
};