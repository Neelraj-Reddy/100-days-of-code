#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        char past='A';
        int A=0,B=0;
        for(auto i: s){
            if (i==past and i=='A'){
                A+=1;
            }
            else if (i==past and i=='B'){
                B+=1;
            }
            past=i;
        }
        cout<<A<<" "<<B<<endl;
    }

}
