class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans =0;
        for(int i=0;i<s.length();i++){//o(N)
            unordered_set<char>seen;  //Space O(N)
            for(int j = i;j<s.length();j++){ // Time O(N*N)
                if(seen.find(s[j])!=seen.end()){
                    break;
                }
                ans = max(ans,(j-i+1));
                seen.insert(s[j]); //O(1)
            
            }
        }
        return ans;
    }

};
