#include<iostream>
using namespace std;
int main(){
    while(1){
        int n;
	cin>>n;
        if(n==0) break;
	int ans=0;	
	while(n!=0){
            ans+=n*n;
	    n-=1;
        }
	cout<<ans<<endl;
    }
}
