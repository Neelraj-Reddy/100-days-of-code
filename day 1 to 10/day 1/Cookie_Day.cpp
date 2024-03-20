#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int N,K;
        cin>>N>>K;
        int arr[N];
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }

        int flag=1;
        int remaining=-1;
        for(int i=0;i<N;i++){
            if(arr[i]>remaining){
                remaining=arr[i];
            }
        }
        for(int i=0;i<N;i++){
            if(arr[i]/K > 0){
                remaining = arr[i]%K < remaining? arr[i]%K : remaining;
                flag=0;
            }
        }

        cout<< ((flag==1)? -1 : remaining )<<endl;
    }
}