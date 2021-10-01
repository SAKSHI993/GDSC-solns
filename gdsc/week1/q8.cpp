class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int flag=1,flag1=1,n=nums.size();
        if(nums[0]<=nums[n-1]){
        for(int i =0;i<n-1;i++){
            if(nums[i]<=nums[i+1])
                flag++;
            else continue;
        }
    }
        else if(nums[0]>nums[n-1]){
             for(int i =0;i<n-1;i++){
            if(nums[i]>=nums[i+1])
                flag1++;
                 else continue;
        }
        }
        if(flag==n||flag1==n)
            return true;
        else 
            return false;
    }
};