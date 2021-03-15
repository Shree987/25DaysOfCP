/*
Author : Shreeraksha R Aithal
Problem name : Encode and Decode TinyURL
Problem link : https://leetcode.com/problems/encode-and-decode-tinyurl/
Difficulty : Medium
Tags : Hash Table, Math
*/

class Solution {
public:
    map<string, string> mapping;
    int index = 0;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string hash = to_string(index);
        index++;
        mapping[hash]=longUrl;
        return hash;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return mapping[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));