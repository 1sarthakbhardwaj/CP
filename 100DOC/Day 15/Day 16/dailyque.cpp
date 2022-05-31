https://leetcode.com/problems/check-if-a-string-contains-all-binary-codes-of-size-k/

class Solution {
public:
    bool hasAllCodes(string s, int k) {
        set<string>se;
        
        for(int i=0;i<s.size()-k;i++){
            se.insert(s.substr(i,k));
        }
        
        return (se.size() == pow(2,k));
    }
};