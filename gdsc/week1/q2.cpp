class Solution {
  public:
  
    int firstRepeated(int a[], int n) {
        int ans=-1;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]==a[j]){
                    ans=i+1;
                    return ans;
                    break;
                }
            }
        }
        return ans;
    }
};