/*
Author : Shreeraksha R Aithal
Problem name : Prefix and Suffix Search
Problem link : https://leetcode.com/problems/prefix-and-suffix-search/
Difficulty : Hard
Tags : Trie
*/

class Tree{
    public:
        Tree(){
            this->child.resize(26);
            for(int i=0;i<26;i++){
                this->child[i] = nullptr;
            }
            
        }
        vector<Tree*> child;
        vector<int> index;        
};

class WordFilter {
public:
    Tree *pTree, *sTree;
    WordFilter(vector<string>& words) {
        pTree = new Tree();
        sTree = new Tree();
        for(int k=words.size()-1; k>=0; k--){
            pTree->index.push_back(k);
            sTree->index.push_back(k);
            int n = words[k].size();
            Tree *ptr = pTree;
            for(int i=0;i<n;i++){
                int j = words[k][i]-'a';
                if(ptr->child[j] == nullptr){
                    ptr->child[j] = new Tree();
                }
                ptr = ptr->child[j];
                ptr->index.push_back(k);
            }
            ptr = sTree;
            for(int i=n-1;i>=0;i--){
                int j = words[k][i]-'a';
                if(ptr->child[j] == nullptr){
                    ptr->child[j] = new Tree();
                }
                ptr = ptr->child[j];
                ptr->index.push_back(k);
            }
        }        
    }
    
    int f(string prefix, string suffix) {
        Tree *pptr = pTree;
        Tree *sptr = sTree;
        for(int i=0;i<prefix.size();i++){
            int j = prefix[i]-'a';
            if(pptr->child[j] == nullptr){
                return -1;
            }
            pptr = pptr->child[j];
        }
        for(int i=suffix.size()-1;i>=0;i--){
            int j = suffix[i]-'a';
            if(sptr->child[j] == nullptr){
                return -1;
            }
            sptr = sptr->child[j];
        }
        int i = 0, j = 0;
        while(i<(pptr->index.size()) && j<(sptr->index.size())){
            if(pptr->index[i] == sptr->index[j])    return pptr->index[i];
            else if(pptr->index[i] > sptr->index[j])    i--;
            else    j--;
        }
        return -1;
    }
};

/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(prefix,suffix);
 */