#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
        N=N*2;
	    int arr[N];
	    for(int i=0;i<N;i++){
	        cin>>arr[i];
	    }
	    int flag=1;
	    for(int i=0;i<N;i++){
	        int count = 0;
	        for(int j=0;j<N;j++){
	            if(arr[i]==arr[j]){
	                count+=1;
	            }
	        }
	        
	        if (count>2){
	            flag=0;
	            cout<<"No"<<endl;
	            break;
	        }
	    }
	    
	    if (flag==1) cout<<"Yes"<<endl;
	}

}
