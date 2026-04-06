class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!= t.length()){
            return false;
        }
        unordered_map<char,int> vs;//(26,0);
        unordered_map<char,int> vt;//(26,0);

        for(const char& x : s){
            vs[x]++;
        }
        for(const char& x : t){
            vt[x]++;
        }
        // for(int i=0;i<26;i++){
        //     if(vt[i]!=vs[i]){
        //         return false;
        //     }
        // }
        return vt==vs;
    }
};
