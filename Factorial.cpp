#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int find5(int t){
    int ans=0;
    for(int i=5;i<=t;i*=5) ans+=int(t/i);
    return ans;
}
int find2(int t){
    int ans=0;
    for(int i=2;i<=t;i*=2) ans+=int(t/i);
    return ans;
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        int inp1;
        cin>>inp1;
        cout<<min(find2(inp1),find5(inp1))<<endl;
    }
}

