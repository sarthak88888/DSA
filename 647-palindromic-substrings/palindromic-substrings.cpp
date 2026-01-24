class Solution {
public:
int expandAroundIndex(string s, int left, int right){
    int count =0;
    while(left >=0  && right <s.length() && s[left] == s[right] ) {
        count++;
        left--;
        right++;
    }
    return count;
}
    int countSubstrings(string s) {
        int totalcount = 0;
        int n = s.length();

        for(int center =0; center<n; center++) {
            //odd
            int oddKaAns = expandAroundIndex(s, center, center);
            totalcount = totalcount + oddKaAns;
            //even
            int evenKaAns = expandAroundIndex(s,center,center+1);
            totalcount = totalcount + evenKaAns;
        }  

        return totalcount;
        
    }
};