class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        map<int,int>mp;
        int count=0;
        for(int i = 0 ; i < n; i++){
            mp[nums[i]]++;
        }

        for(auto it:mp){
            if(it.second > 0){
                nums[count]=it.first;
                count++;
            }
        }
        return count;
    }
};