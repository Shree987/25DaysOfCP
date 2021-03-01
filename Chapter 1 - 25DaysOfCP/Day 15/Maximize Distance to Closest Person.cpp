/*
Author : Shreeraksha R Aithal
Problem name : Maximize Distance to Closest Person
Problem link : https://leetcode.com/problems/maximize-distance-to-closest-person/
Difficulty : Medium
Tags : Array
*/

class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int curr=-1, answer = 0, n = seats.size(), i=0;
        while(i<n && seats[i] == 0)    i++;
        curr = i;
        i++;
        answer = curr;
        while(i<n){
            while(i<n && seats[i] == 0)    i++;
            if(i==n)    break;
            answer = max(answer, (i-curr)/2);
            curr = i;
            i++;
        }
        answer = max(answer, n-curr-1);
        return answer;
    }
};