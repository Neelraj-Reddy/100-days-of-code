#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int mat[N][N];

        for(int i =0;i<N;i++){
            for(int j=0;j<N;j++){
                cin>>mat[i][j];
            }
        }

        int max=0;
        for(int i =0;i<N;i++){
            int t1=i,t2=0;
            int temp = 0;
            while(t1<N && t2<N){
                temp+=mat[t1][t2];
                // cout<<temp<<endl;
                t1++;t2++;
            }
            if(temp>max) 
            {max = temp;}

        }

        for(int i = 1;i<N;i++){
            int t1=0,t2=i;
            int temp = 0;
            while(t1<N && t2<N){
                temp+=mat[t1][t2];
                // cout<<temp<<endl;
                t1++;t2++;
            }
            if(temp>max) 
            {max = temp;}

        }

        cout<<max;
    }
}