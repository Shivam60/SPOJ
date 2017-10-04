#include<iostream>
#include<math.h>
using namespace std;
int isprm(int p){
	if(p==1) return false;
    for(int i=2;i<=int(sqrt(p));++i){
	if(p%i==0) return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        int inp1,inp2;
        cin>>inp1>>inp2;
        for(int j=inp1;j<=inp2;++j){
            if(isprm(j)==1) cout<<endl<<j;
    }
}
}

