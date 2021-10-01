class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int p=0,j,i;
        vector<int> ans;
        if(n==1&&nums[0]==target){
            ans.push_back(0);
            ans.push_back(0);
        }
        else if(n==1&&nums[0]!=target){
            ans.push_back(-1);
            ans.push_back(-1);
        }
        else{
        for(i=0;i<n;i++){
            if(nums[i]==target){
                j=i;
                p++;
                while(i<n&&nums[i]==target){
                    i++;
                }
                break;
            }
        }
        if(p==0){
            ans.push_back(-1);
            ans.push_back(-1);
        }
        else if(j==i&&p!=0){
            ans.push_back(j);
            ans.push_back(-1);
        } 
        else if(j!=i&&p!=0){
             ans.push_back(j);
             ans.push_back(i-1);
        }
        }
        return ans;
    }
};