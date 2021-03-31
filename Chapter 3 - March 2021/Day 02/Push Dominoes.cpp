/*
Author : Shreeraksha R Aithal
Problem name : Push Dominoes
Problem link : https://leetcode.com/problems/push-dominoes/
Difficulty : Medium
Tags : Dynamic Programming, Two Pointers
*/

class Solution {
public:
    string pushDominoes(string dominoes) {
        int i, n = dominoes.size(), k = INT_MAX;
        vector<int> v(n, INT_MAX);
        for(i=0;i<n;i++){
            if(dominoes[i] == 'R')  k = 0;
            else if(dominoes[i] == 'L')      k = INT_MAX;
            v[i] = k;
            if(k < INT_MAX)     k++;
        }
        k = INT_MAX;
        for(i=n-1;i>=0;i--){
            if(dominoes[i] == 'L')  k = 0;
            else if(dominoes[i] == 'R')      k = INT_MAX;
            if(v[i] == k)   dominoes[i]='.';
            else if(v[i] > k)   dominoes[i] = 'L';
            else    dominoes[i] = 'R';
            if(k < INT_MAX)     k++;
        }
        return dominoes;
    }
};