#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while (T--){
	    long long N,count=0;
	    cin>>N;
	    while(N>0){
            // cout<<(int) (log10(N)/log10(2)) <<endl;
	        N=N-pow(2,(int) (log10(N)/log10(2)));
	        count+=1;
	    }
	    cout<<count-1<<endl;
	}

}
