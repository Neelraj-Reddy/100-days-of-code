#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    if(N%2==0){
	        cout<<N/2 + (N/2)*6*2<<endl;
	    }
	    else{
	        cout<<6 + N/2 + (N/2)*6*2<<endl;
	        
	    }   
	}
}
