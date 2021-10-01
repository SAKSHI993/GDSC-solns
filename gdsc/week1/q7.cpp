class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    int n = nums.size();
    int sum =0;
    for(int i=0;i<n;i++)sum+=nums[i];
        int l =0;
    for(int i=0;i<n;i++)
    {
        int right = sum-l-nums[i];
        if(l==right)
            return i;
            l+=nums[i];
    }
        return -1;
}
};