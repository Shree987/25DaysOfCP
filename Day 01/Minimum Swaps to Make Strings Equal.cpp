/*
Author : Shreeraksha R Aithal
Problem name : Minimum Swaps to Make Strings Equal
Problem link : https://leetcode.com/problems/minimum-swaps-to-make-strings-equal/
Difficulty : Medium
Tags : Greedy, String
*/

class Solution {
public:
    int minimumSwap(string s1, string s2) {
        int i,ix=-1,iy=-1,n = s1.size(),cnt=0;
        for(i=0;i<n;i++){
            if(s1[i] == s2[i])  continue;
            else{
                if(s1[i] == 'x'){
                    if(ix != -1){
                        cnt++;
                        ix = -1;
                    }
                    else    ix = i;
                }
                else{
                    if(iy != -1){
                        cnt++;
                        iy = -1;
                    }
                    else    iy = i;                    
                }
            }
        }
        if(ix>=0 && iy>=0)    cnt+=2;
        else if(ix>=0 || iy>=0)   return -1;
        return cnt;
    }
};