#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t!=0){
        string s;
        cin>>s;
        char arr[s.size()/t][t];
        int f=0;
        for(int i=0,k=0;i<s.size()/t;i++){
            if(f==0){
                for(int j=0;j<t;++j){
                    arr[i][j]=s[k++];
                }
                f=1;
            }
            else{
                for(int j=t-1;j>-1;--j){
                    arr[i][j]=s[k++];
                }
                f=0;
            }
        }
        for(int i=0;i<t;i++){
            for(int j=0;j<s.size()/t;++j){
                cout<<arr[j][i];
            }
        }
        cout<<endl;
        cin>>t;
    }
    return 0;
}
