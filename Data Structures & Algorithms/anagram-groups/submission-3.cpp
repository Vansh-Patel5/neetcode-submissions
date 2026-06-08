class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    // anagrams sorted make same key
    unordered_map <string, vector <string>> anaMap;
    string s;
    vector<vector<string>> result;

    for(string k: strs){
        s = k;
        std::sort(s.begin(),s.end());
        anaMap[s].push_back(k);
    }
    for(const auto& pair : anaMap){
        result.push_back(pair.second);
    }
    return result;

    }
};



