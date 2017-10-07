#include<iostream>
#include<stdlib.h>
using namespace std;
 

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
	int inp1,inp2;
        cin>>inp1>>inp2;
	if(inp1==inp2 || ((inp2+2)==inp1) ){
	    if(inp1%2==0 && inp2%2==0) cout<<inp1+inp2<<endl;
	    else if(inp1%2!=0 && inp2%2!=0) cout<<inp1+inp2-1<<endl;
	    else if(inp1%2!=0 && inp2%2==0) cout<<"No Number"<<endl;	
	}
	else cout<<"No Number"<<endl;
   }
}

