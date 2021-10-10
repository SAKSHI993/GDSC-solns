class Solution{
    public:
        void modifyAndRearrangeArr(int arr[], int n) 
    {   int j=0;
    	for(int i=0;i<n-1;i++){
    	    j=i+1;
    	    if((arr[j]!=0)&&(arr[j]==arr[i])){
    	        arr[i]*=2;
    	        arr[j]=0;
    	    }
    	}
    	int idx = 0;
        for(int i=0; i<n; i++)  {
            if(arr[i] != 0)  {
                arr[idx] = arr[i];
	      idx++;
        }
        }
        for(int i=idx; i<n; i++)
            arr[i] = 0;

    	
    }
}; 