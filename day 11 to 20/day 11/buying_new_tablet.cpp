#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int n,hc,max=0;
	    cin>>n>>hc;
	    for(int i=0;i<n;i++){
	        int l,b,c;
	        cin>>l>>b>>c;
	        if(c<=hc && l*b>=max){
	            max=l*b;
	        }
	    }
	    
	    if (max!=0) cout<< max<<endl;
	    else cout<<"no tablet"<<endl;
	}

}
