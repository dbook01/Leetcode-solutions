class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(int i = 0 ; i < nums2.size();i++){
            ans.push_back(nums2[i]);
        }
        for(int i = 0 ; i < nums1.size();i++){
            ans.push_back(nums1[i]);
        }
       int m = ans.size();
        sort(ans.begin(),ans.end());
        double median;

        for(int i = 0 ; i <  m ; i++ ){
            int s = 0 , e = m-1;
            int mid = s+(e-s)/2;
            if(m % 2 == 0){
                median = double(ans[mid] + ans[mid+1])/2;
            }
            else{
                median = ans[mid];
            }
        }
        return median;
    }
};