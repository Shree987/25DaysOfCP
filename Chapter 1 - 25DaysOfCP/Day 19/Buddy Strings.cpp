/*
Author : Shreeraksha R Aithal
Problem name : Buddy Strings
Problem link : https://leetcode.com/problems/buddy-strings/
Difficulty : Easy
Tags : String
*/

class Solution {
public:
    bool buddyStrings(string A, string B) {
        int i, j=-1, n=A.size(), m=B.size();
        if(n!=m)    return false;
        if(A == B){
            vector<bool> v(26, false);
            for(auto c : A){
                if(v[c-'a'])    return true;
                v[c-'a'] = true;
            }
            return false;
        }
        else{
            j = m = -1;
            for(i=0;i<n;i++){
                if(A[i] != B[i]){
                    if(j == -1)     j = i;
                    else if(m == -1)    m = i;
                    else    return false;
                }
            }
            if(m == -1)     return false;
            swap(A[m], A[j]);
            if(A[m] == B[m] && A[j] == B[j])    return true;
            return false;
        }
        return false;
    }
};