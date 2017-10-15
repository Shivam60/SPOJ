#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int lm=0;
        cin>>lm;
        vector<int> a,b;
        int t,sum=0;
        for(int i=0;i<lm;++i){
            cin>>t;
            a.push_back(t);
        }
        for(int i=0;i<lm;++i){
            cin>>t;
            b.push_back(t);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i=0;i<lm;++i){
            sum+=a[i]*b[i];
        }
        cout<<sum<<endl;
    }
}

