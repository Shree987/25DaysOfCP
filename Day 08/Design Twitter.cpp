/*
Author : Shreeraksha R Aithal
Problem name : Design Twitter
Problem link : https://leetcode.com/problems/design-twitter/
Difficulty : Medium
Tags : Hash Table, Heap, Design
*/

class Twitter {
public:
    map<int, set<int>> followMap;
    vector<pair<int,int>> tweets;
    
    /** Initialize your data structure here. */
    Twitter() { 
    }
    
    /** Compose a new tweet. */
    void postTweet(int userId, int tweetId) {
        tweets.push_back({userId, tweetId});
    }
    
    /** Retrieve the 10 most recent tweet ids in the user's news feed. Each item in the news feed must be posted by users who the user followed or by the user herself. Tweets must be ordered from most recent to least recent. */
    vector<int> getNewsFeed(int userId) {
        vector<int> Feed;
        set<int> user = followMap[userId];
        int i = tweets.size()-1;
        while(i>=0 && Feed.size()<10){
            if(tweets[i].first == userId)   Feed.push_back(tweets[i].second);
            else if(user.find(tweets[i].first) != user.end()){
                Feed.push_back(tweets[i].second);
            }
            i--;
        }
        return Feed;
    }
    
    /** Follower follows a followee. If the operation is invalid, it should be a no-op. */
    void follow(int followerId, int followeeId) {
        followMap[followerId].insert(followeeId);
    }
    
    /** Follower unfollows a followee. If the operation is invalid, it should be a no-op. */
    void unfollow(int followerId, int followeeId) {
        followMap[followerId].erase(followeeId);
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */