/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int> arr;
        ListNode*curr =head;
        while(curr!=nullptr){
            arr.push_back(curr->val);
            curr=curr->next;
        }
        int i =0;
        int j=arr.size()-1;

        int max = INT_MIN;

        while(i<j){
          int candidate = arr[i]+arr[j];
          max = std::max(max,candidate);

          i=i+1;
          j=j-1;  
        }
        return max;
    }
};