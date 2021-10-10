 class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    
    {   
       vector<int> r;
       int a = 0, b = 0, sum = 0;


       while(sum != s and sum >= 0)
       {
           if(sum > s)
               sum -= arr[a++];
           else
               sum += arr[b++];
       }
       
       if(b==0 || b>n) r.push_back(-1);
       
       else{
         r.push_back(a+1);
         r.push_back(b);
       }
       
       return r;
    }
};
