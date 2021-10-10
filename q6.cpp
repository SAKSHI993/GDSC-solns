class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int mid,high=nums.size()-1,low=0,ans=-1;
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
        }
        if(ans==-1){
            ans=low;
        }
        return ans;
    }
};