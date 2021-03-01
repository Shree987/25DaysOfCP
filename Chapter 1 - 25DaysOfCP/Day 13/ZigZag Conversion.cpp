/*
Author : Shreeraksha R Aithal
Problem name : ZigZag Conversion
Problem link : https://leetcode.com/problems/zigzag-conversion/
Difficulty : Medium
Tags : String
*/

class Solution {
public:
    string convert(string s, int numRows) {
        int i,j,n = s.size();
        string ans = "";
        if(numRows == 0)    return "";
        else if(numRows == 1 || n<=2 || n<=numRows)   return s;
        else if(numRows == 2){
            for(i=0;i<n;i+=2)   ans = ans + s[i];
            for(i=1;i<n;i+=2)   ans = ans + s[i];
            return ans;
        }
        else{
            for(i=0;i<n;i+=numRows*2-2){
                ans = ans + s[i];
            }
            for(j=1;j<numRows-1;j++){
                for(i=j;i<n;i+=numRows*2-2){
                    ans = ans + s[i];
                    if((i+2*(numRows-j-1))<n)
                        ans = ans + s[i+2*(numRows-j-1)];
                }
            }                
            for(i=numRows-1;i<n;i+=numRows*2 - 2){
                ans = ans + s[i];    
            }
            return ans;
        }
    }
};