class Solution {
public:
    bool checkanagram(string s1, string s2){
        if(s1.length()!=s2.length()){
            return false;
        }
        std::unordered_map<char, int> s1map;
        std::unordered_map<char, int> s2map;
        for(int i=0;i<s1.length();i++){
            s1map[s1[i]]++;
            s2map[s2[i]]++;
        }
        return s1map==s2map;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        vector<bool> visited(strs.size(), false);
        for(int i=0; i<strs.size();i++){
            if(visited[i]){continue;}
            vector<string> group;
            group.push_back(strs[i]);
            visited[i] = true;
            for(int j=i+1; j<strs.size(); j++){
                if(!visited[j] && checkanagram(strs[i], strs[j])){
                    group.push_back(strs[j]);
                    visited[j] = true;
                }
            }
            ans.push_back(group);
        }
        return ans;
    }
};
