class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int hash[256] ={0};//mapping each char of lang 's' tp 't'
        bool itsCharsMapped[256] ={0};

        for(int i=0;i<s.size();i++){
            if(hash[s[i]] ==0 && itsCharsMapped[t[i]]==0){
                hash[s[i]] = t[i] ;
                itsCharsMapped[t[i]] = true;
            }
        }
        for(int i =0;i<s.size(); i++){
            if(char(hash[s[i]]) != t[i]){
                return false;
            }
        }
        return true;
    }
};