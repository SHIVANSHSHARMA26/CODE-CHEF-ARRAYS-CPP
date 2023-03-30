#include <iostream>
using namespace std;

int main() {
	int t,n,ans;
	cin>>t;
	while(t--){
	    cin>>n;
	    int arr[n];
	    ans=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        if(arr[i]>=1000){ans++;}
	    }cout<<ans<<"\n";
	}
	return 0;
}
