class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int ans = 0 ;
        int temp = nums[n-1];
        while(k--){
            
            ans+=temp;

            temp++;
            
        }

        return ans;

    }
};