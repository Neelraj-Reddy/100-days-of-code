#include<iostream>
using namespace std;

int value(){
    int name=0;
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    if(n1>=n2 && n1>=n3){ 
        name=n1*100+ (n2>n3? n2*10+n3 : n3*10 + n2);
    }
    else if(n2>=n1 && n2>=n3){ 
        name=n2*100+ (n1>n3? n1*10+n3 : n3*10 + n1);
    }
    else if(n3>=n1 && n3>=n2){ 
        name=n3*100+ (n1>n2? n1*10+n2 : n2*10 + n1);
    }

    return name;

}

int main(){
    int T;
    cin>>T;
    while(T--){
        int Alice=0,Bob=0;
        Alice=value();
        Bob=value();
        if(Alice>Bob){
            cout<<"Alice"<<endl;
        }
        else if(Bob > Alice){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Tie"<<endl;
        }
        
    }
}