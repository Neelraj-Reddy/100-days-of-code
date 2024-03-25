#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int max=0,N;
	    cin>>N;
	    string s;
	    cin>>s;
	    int count=0,count_of_1=0;
	    for(auto i: s){
	        if (i=='0'){
	            count+=1;
	        }
	        else if (i=='1'){
	            max = count>max? count: max;
	            count=0;
                count_of_1+=1;
	        }
	    }
	    max = count>max? count: max;
	    cout<<max + count_of_1 <<endl;
	}

}
