/*
Author : Shreeraksha R Aithal
Problem name : String to Integer (atoi)
Problem link : https://leetcode.com/problems/string-to-integer-atoi/
Difficulty : Medium
Tags : Math, String
*/

bool isnum(char c){
    if(c>='0' && c<='9')    return true;
    return false;
}

class Solution {
public:
    int myAtoi(string str) {
        int i=0,n = str.size();
        long j=0;
        bool a=false;
        while(i<n && str[i]==' ')   i++;
        if(i==n || (!isnum(str[i]) && str[i]!='+' && str[i]!='-'))   return 0;
        j=0;
        if(str[i]=='+')     i++;
        else if(str[i]=='-'){
            i++;
            a = true;
        }
        while(i<n && isnum(str[i])){
            j = 10*j + (str[i]-'0');
            if(a && -j<=INT_MIN)    return INT_MIN;
            else if(!a && j>=INT_MAX)   return INT_MAX;
            i++;
        }
        return a ? -j : j;
    }
};