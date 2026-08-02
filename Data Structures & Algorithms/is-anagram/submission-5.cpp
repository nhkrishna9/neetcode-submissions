class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        /*
        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());
        return s==t;
        */
        /*
        unordered_map<char, size_t> smap;
        unordered_map<char, size_t> tmap;
        for(int i=0;i<s.length();i++){
            smap[s[i]]++;
            tmap[t[i]]++;
        }
        return smap == tmap;
        */
        vector<int> count(26, 0);
        for (int i = 0; i < s.length(); i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for (int val : count) {
            if (val != 0) {
                return false;
            }
        }
        return true;


        
    }
};
