#include<algorithm>
class Solution{
    public:
    int immediateSmaller(int arr[], int n, int x)
    {
        int max1=-1;
    for(int i=0;i<n;i++){
        if(arr[i]<x){
            max1=max(arr[i],max1);
        }
    }
       return max1;
    }
};