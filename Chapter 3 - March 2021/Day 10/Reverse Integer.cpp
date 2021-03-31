/*
Author : Shreeraksha R Aithal
Problem name : Reverse Integer
Problem link : https://leetcode.com/problems/reverse-integer/
Difficulty : Easy
Tags : Math
*/

class Solution {
public:
    int reverse(int x) {
        if(x>-10 && x<10)   return x;
        if(x == INT_MIN)    return 0;
        bool b = false;
        if(x < 0){
            b = true;
            x = -x;
        }
        int ans = 0;
        while(ans < 100000000 && x>0){
            ans = ans*10 + x%10;
            x = x/10;
        }
        if(x == 0){
            if(b)   return -ans;
            return ans;
        }
        else if(x > 9){
            if(b)   return 0;
            return 0;
        }
        if(b){
            if(ans < 214748364){
                return -10*ans-x;
            }
            else if(ans > 214748364 || x>9){
                return 0;
            }
            else{
                return -10*ans-x;
            }
        }
        else{
            if(ans < 214748364){
                return 10*ans+x;
            }
            else if(ans > 214748364 || x>8){
                return 0;
            }
            else{
                return 10*ans+x;
            }
        }
        return 0;
    }
};