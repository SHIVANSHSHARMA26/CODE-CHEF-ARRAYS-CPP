#include <iostream>
using namespace std;

int main() {
	int ans;
	int arr[4];
	ans=0;
	for(int i=0;i<4;i++){
	    cin>>arr[i];
	    if(arr[i]>=10){ans++;}
	    
	}cout<<ans;
	return 0;
}
