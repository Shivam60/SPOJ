#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    while(1){

    int n1,n2,n3;
	cin>>n1>>n2>>n3;
    if(n1==0 && n2==0 && n3==0) break;

	n3=n3;
	n2=n2;
	n1=n1;

    if((n1+n3)==n2*2){
	   cout<<"AP "<<n3+n2-n1<<endl;
	}
	else if(((n2/n1)*n2)==n3){
	   cout<<"GP "<<n3*n3/n2<<endl;
	}
	else cout<<"None: "<<endl;
    }
}

