class Solution {
public:
    bool isSubsequence(string s, string t) {
        //using two pointer approach 
        int i = 0 ;  // for string s 
        if(s.length()==0)return true;
        for(int j = 0 ; j < t.length() ; j++){ // for string t
             if(s[i] == t[j]) i++;

             if(i==s.length()) return true;
        }
        return false;
    }
};