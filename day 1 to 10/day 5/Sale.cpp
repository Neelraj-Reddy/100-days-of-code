#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int arr[N];
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        int sum=0,max=0;
        for(int i=0;i<N;i++){
            sum += arr[i];
            max = sum+arr[i]>max?sum+arr[i]:max;
        }
        cout<<max<<endl;
    }

}
