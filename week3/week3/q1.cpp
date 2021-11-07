#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

#include<bits/stdc++.h>
#include<algorithm>
class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
       int a[256]={0},c,cmax=-1;
       char ans;
       for(int i=0;i<str.length();i++){
           c=int(str[i]);
          a[c]++;
       }
        for(int i = 0; i < str.size(); ++i) {
            c=int(str[i]);
            if(a[c] > cmax) {
                ans = str[i];
                cmax = a[c];
            }
            
            else if(a[c] == cmax) {
                if(ans > str[i])
                ans = str[i];
            }
        }
        return ans;
    }

};

// { Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}  // } Driver Code Ends