// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         int k = pat.size();
//         int m = txt.size();

//         vector<int>p(26,0);
//         vector<int>t(26,0);

//         for(auto c:pat){
//             p[c-'a']++;

//         }
//         int i=0;j = 0;ans=o;
//         while(j<m){
//             t[txt[j]-'a']++;
//             if(j-i+1<k)j++;
//             else if(j-i+1==k){
//                 if(p==t){
//                     ans++;
//                 }
//                 t[txt[i]-'a']--;
//                 i++;
//                 j++;
//             }
//         }
//         return ans;
//     }
// };


// class Solution {
// public:
//     bool isAnagram(string s, string t) {

//         if(s.size() != t.size())
//             return false;
//         unordered_map<char, int> mp;
//         for(int i = 0; i < s.size(); i++)
//         {
//             mp[s[i]]++;
//         }
//         for(int i = 0; i < t.size(); i++)
//         {
//             mp[t[i]]--;
//         }
//         for(auto x : mp)
//         {
//             if(x.second != 0)
//                 return false;
//         }

//         return true;
//     }
// };

class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() != t.size())
            return false;
        unordered_map<char, int> mp;
        for(int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
        }
        for(int i = 0; i < t.size(); i++)
        {
            mp[t[i]]--;
            if(mp[t[i]] == 0)
                mp.erase(t[i]);
        }
        return mp.empty();
    }
};