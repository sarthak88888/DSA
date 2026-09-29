class Solution {
public:
    string addStrings(string num1, string num2) {
        int i =num1.size()-1;
        int j =num2.size()-1;
        int carry =0;
        string ans;

        while(i>=0 || j>=0 || carry>0){
            int csum=0;
            if(i>=0){
                csum +=num1[i]-'0';
                i--;
            }
            if(j>=0){
                csum +=num2[j]-'0';
                j--;
            }
            csum +=carry;
            int lastDigit= csum%10;
            char lastDigitChar =lastDigit+'0';
            ans.push_back(lastDigitChar);
            carry=csum/10;
        } 
        reverse(ans.begin(),ans.end());
        return ans;
    }
};