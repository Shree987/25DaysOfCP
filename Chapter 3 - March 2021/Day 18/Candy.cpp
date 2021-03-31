/*
Author : Shreeraksha R Aithal
Problem name : Candy
Problem link : https://leetcode.com/problems/candy/
Difficulty : Hard
Tags : Greedy
*/

class Solution {
public:
    int candy(vector<int>& ratings) {
        int i, j, n = ratings.size(), sum = 0, a, b;
        if(n == 1)  return 1;
        vector<pair<int,int>> vp(n);
        vector<int> candy(n,-1);
        for(i=0;i<n;i++){
            vp[i] = {ratings[i], i};
        }
        sort(vp.begin(), vp.end());
        for(i=0;i<n;i++){
            j = vp[i].second;
            if(j == 0){
                if(candy[1] == -1 || ratings[0] == ratings[1]){
                    candy[0] = 1;
                }
                else{
                    candy[0] = candy[1]+1;
                }
                sum += candy[0];
            }
            else if(j == n-1){
                if(candy[n-2] == -1 || ratings[n-1] == ratings[n-2]){
                    candy[n-1] = 1;
                }
                else{
                    candy[n-1] = candy[n-2]+1;
                }
                sum += candy[n-1];
            }
            else{
                if(candy[j-1] == -1 || ratings[j-1] == ratings[j])     a = 1;
                else    a = candy[j-1]+1;
                
                if(candy[j+1] == -1 || ratings[j+1] == ratings[j])     b = 1;
                else    b = candy[j+1]+1;
                
                candy[j] = max(a,b);
                sum += candy[j];
            }
        }
        return sum;
    }
};