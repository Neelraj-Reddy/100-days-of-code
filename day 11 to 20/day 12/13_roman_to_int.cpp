// Leet code problem


#include <bits/stdc++.h>
using namespace std;


int romanToInt(string s){
    int value=0;
    s="0"+s;
    cout<<s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='I') value+=1;
        
        else if(s[i]=='V'){
            if(s[i-1]=='I'){
                value+=3;
            }
            else value+=5;
        }

        else if(s[i]=='X'){
            if(s[i-1]=='I'){
                value+=8;
            }
            else value+=10;
        }

        else if(s[i]=='L'){
            if(s[i-1]=='X'){
                value+=30;
            }
            else value+=50;
        }

        else if(s[i]=='C'){
            if(s[i-1]=='X'){
                value+=80;
            }
            else value+=100;
        }

        else if(s[i]=='D'){
            if(s[i-1]=='C'){
                value+=300;
            }
            else value+=500;
        }

        else if(s[i]=='M'){
            if(s[i-1]=='C'){
                value+=800;
            }
            else value+=1000;
        }

    }
    return value;
}

int main(){
    cout<<romanToInt("LVIII");
}