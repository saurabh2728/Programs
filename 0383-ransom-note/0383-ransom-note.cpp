class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> m;
        for(auto x: magazine){
            m[x]++;

        }
        for(auto x: ransomNote){
            m[x]--;
            if(m[x]==-1) return 0;
        }
        return 1;
        
    }
};