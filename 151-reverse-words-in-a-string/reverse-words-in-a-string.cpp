class Solution {
public:
    string reverseWords(string s) {
       stringstream ss(s);
       vector<string> words;
       string word;

       //extract each word
       while(ss>> word){
        words.push_back(word);
       }  
       //reverse the words
       int i =0;
       int j = words.size()-1;

       while(i<j){
        string temp = words[i];
        words[i]=words[j];
        words[j]=temp;

        i++;
        j--;
       }
       string ans = "";
       for (int k =0; k< words.size();k++){
        if(k>0){
            ans +=" ";
        }
        ans += words[k];
       }
       return ans;
    }
};