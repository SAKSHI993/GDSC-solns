class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
    int max=a[n-1];
       vector <int> v1;
       v1.push_back(max);
       for(int i=n-2;i>=0;i--)
       {
               if(max<=a[i])
                   {
                       max=a[i];
                       v1.push_back(max);
                   }
           
       }
       
       reverse(v1.begin(),v1.end());
       return v1;
    }
};