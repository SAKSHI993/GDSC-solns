class Solution{
    public:
    // Function to find missing integer in array
    // arr: input array
    // n: size of array
    int findMissing(int arr[], int n) { 
        int ans=-1,i,j;
    for(i=1;i<n;i++){
    int current=arr[i];
    j=i-1;
    while((arr[j]>current)&&(j>=0)){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=current;
    }
    i=0;
    if(n==1){
        if(arr[0]!=1){
            ans=1;
        }
        else ans=2;
    }
    else{
    while(i<n-1){
        if(arr[i]>=0){
             
             if(arr[i-1]<0&&arr[i]>1){
				ans=1;
				break;
			}          
            if((arr[i+1]!=arr[i])&&(arr[i+1]!=arr[i]+1)){
                ans=arr[i]+1;
                break;
            }
        }
        i++;
    }
    if(ans==-1&&arr[i]>=0){
        ans=arr[i]+1;
    }
    else if(ans==-1&&arr[i]<0){
        ans=0;
    }
        
    }
// 	}
     return ans;   
    }
};