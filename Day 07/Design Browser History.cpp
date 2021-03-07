/*
Author : Shreeraksha R Aithal
Problem name : Design Browser History
Problem link : https://leetcode.com/problems/design-browser-history/
Difficulty : Medium
Tags : Design
*/

class BrowserHistory {
    vector<string> pages;
    int index, capacity;
public:
    BrowserHistory(string homepage) {
        pages.resize(5000);
        index = capacity = 0;
        pages[0] = homepage;
    }
    
    void visit(string url) {
        index++;
        capacity = index;
        pages[index] = url;
    }
    
    string back(int steps) {
        index = max(0, index-steps);
        return pages[index];
    }
    
    string forward(int steps) {
        index = min(capacity, index + steps);
        return pages[index];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */