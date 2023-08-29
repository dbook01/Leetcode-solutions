class Solution {
public:
    string reverseWords(string s) {
        vector<string>v;
        string ans="";
        string temp ="";
        for(int i = 0 ; i < s.length(); i++){
            if(s[i]==' '){
                
                if(temp.size()!=0){
                    v.push_back(temp);
                }
                temp="";
                
            }

            else{
                temp+=s[i];
            }
        }

        if(temp.size()!=0){
            v.push_back(temp);
        }

        for(int i = v.size()-1; i >0 ; i--){
            ans+=v[i];
            ans+=' ';
        }

        ans+=v[0];
        return ans;
    }
};