#include  <unordered_set>
//#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for(const int& i : nums){
            if(st.count(i)>0){
                return true;
            }
            else{
                st.insert(i);
            }
        }
        return false;
    }
};