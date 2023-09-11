class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>mp;
        for(int i = 0 ; i < nums.size(); i++){
            if(nums[i]%2==0){
                mp[nums[i]]++;
            }
            
                
            
        }
        int maxn= -1;
        int maxfreq = 0 ;

        
    
        for(auto i : mp){
            
            if(i.second > maxfreq){
                maxfreq = i.second;
                maxn = i.first;
            }
            
            
        }
        return maxn;
    }
};