#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
	vector<string> stk;
	vector<string> opd;
        string inp,p1;
        cin>>inp;
        for(int j=0;j<inp.length();++j){
            if(inp[j]=='+' || inp[j]=='^'  || inp[j]=='*'  || inp[j]=='-'  || inp[j]=='/' ) opd.push_back(string(1,inp[j]));
	    else if(inp[j]=='(');
            else if(inp[j]==')'){
		string t1=stk[stk.size()-1];
		stk.pop_back();
		string t2=stk[stk.size()-1];
		stk.pop_back();
		string t3=opd[opd.size()-1];
		opd.pop_back();
		stk.push_back(t2+t1+t3);
		}
	    else stk.push_back(string(1,inp[j]));

        }
	for(int j=0;j<stk.size();++j) cout<<stk[j];
	cout<<endl;
    }
}
