class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> vs(26,0);
        vector<int> vt(26,0);

        for(const char& x : s){
            vs[x-'a']++;
        }
        for(const char& x : t){
            vt[x-'a']++;
        }
        for(int i=0;i<26;i++){
            if(vt[i]!=vs[i]){
                return false;
            }
        }
        return true;
    }
};
