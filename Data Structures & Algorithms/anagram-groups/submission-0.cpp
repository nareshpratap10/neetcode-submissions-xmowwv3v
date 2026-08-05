#include<string>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> umap;
        for(string x : strs){
            string y = x;
            std::sort(x.begin(),x.end());
            umap[x].push_back(y);
        }
        vector<vector<string>>ans;
        for(auto x : umap){
            ans.push_back(x.second);
        }
        return ans;
    }
};
