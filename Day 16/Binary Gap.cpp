/*
Author : Shreeraksha R Aithal
Problem name : Binary Gap
Problem link : https://leetcode.com/problems/binary-gap/
Difficulty : Easy
Tags : Math
*/

class Solution {
public:
    int binaryGap(int n) {
        int max = 0, cnt = 0;
        while(n>0 && n%2 == 0)  n/=2;
        if(n == 0)  return 0;
        while(n>0){
            cnt = 1;
            n = n/2;
            while(n>0 && n%2 == 0){
                n = n/2;
                cnt++;
            }
            if(n == 0)  return max;
            else if(cnt>max)    max = cnt;
        }
        return max;
    }
};