#include<string>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> umap;
        for(const string &x : strs){
            string y = x;
            std::sort(y.begin(),y.end());
            umap[y].push_back(x);
        }
        vector<vector<string>>ans;
        for(auto& x : umap){
            ans.push_back(x.second);
        }
        return ans;
    }
};
