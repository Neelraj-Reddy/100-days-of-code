#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
        cin>>N;
	    if (N%2 == 0){
	        cout<<"1";
	        for(int i=0;i<N-2;i++){
	            cout<<"0";
	        }
	        cout<<"1"<<endl;
	    }
	    else{
	        for(int i=0;i<N;i++){
	            if(i%2==0){
	                cout<<"1";
	            }
	            else{
	                cout<<"0";
	            }
	        }
	        cout<<endl;
	    }
	}

}
