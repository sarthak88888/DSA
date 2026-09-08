class Solution {
public:
    string removeDuplicates(string s, int k) {
        string ans ="";
        vector<int> count;

        for(int i =0;i<s.length();i++){
            char ch =s[i];

            if (ans.empty()||ch !=ans.back()){
                ans.push_back(ch);
                count.push_back(1);
            }
            else{
                count.back()++;

                if(count.back() ==k){
                    ans.pop_back();
                    count.pop_back();
                }
            }
        }
        string result ="";

        for(int i =0;i<ans.length();i++){
            result += string(count[i],ans[i]);
        }
        return result;
    }
};