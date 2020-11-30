/*
Author : Shreeraksha R Aithal
Problem name : Punctuation
Problem link : http://codeforces.com/problemset/problem/147/A
Rating : 1300
Tags : Strings
*/

#include<bits/stdc++.h>
using namespace std;

int type(char c){
    if(c == '.' || c == ',' || c == '?' || c == '!')    return 1;
    return 2;
}

int main() {
    int i,n,m;
    string str,str2="";
    while(cin>>str){
        n = str.size();
        for(i=0;i<n;i++){
            m = str2.size();
            switch(type(str[i])){
               case 1 : if(str2[m-1] == ' '){
                            str2[m-1] = str[i];
                            str2 = str2 + " ";
                        }
                        else{
                            str2 = str2 + str[i] + " ";
                        }
                         break;
               case 2 : str2 = str2 + str[i];
                        break;
            }
        }
        if(str2[str2.size()-1]!=' ')    str2 = str2 + " ";
    }
    str2[str2.size()-1]='\n';
    cout<<str2;
    return 0;
}