#include <iostream>
using namespace std;
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	int high=n-1,low=0;
	while(low<high){
	    int temp=a[low];
	    a[low]=a[high];
	    a[high]=temp;
	    low++;
	    high--;
	}
	for(int i=0;i<n;i++){
	    cout<<a[i]<<" ";
	}
	cout<<endl;
	}
	return 0;
}