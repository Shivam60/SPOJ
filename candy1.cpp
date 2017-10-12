#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    while(1){
        int t=0;
        cin>>t;
        if (t==-1) break;
        else{
            int i=0,sum=0,ctr=t,arr[t];
            while(t-->0){
                int p;
                cin>>p;
                sum+=p;
                arr[i++]=p;
            }
            int ans=sum/ctr,ans2=0;
            if(ans*ctr==sum){
                for(int i=0;i<ctr;++i){
                    if(arr[i]<ans) ans2+=abs(arr[i]-ans);
                }
                cout<<ans2<<endl;
            }
            else cout<<-1<<endl;
        }
    }
}

