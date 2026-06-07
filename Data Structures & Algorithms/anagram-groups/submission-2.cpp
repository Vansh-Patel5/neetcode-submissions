class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    // create a hashmap with key string and value of vector of type string
    unordered_map<string, vector<string>> myMap; //hashmap declaration
    // declare sort element
    std::string s;
    // declare result array of string arrays
    std:: vector<vector<string>> result;

    //loop through the array, iterative loop
    for(int i = 0; i < strs.size(); i++){
        // sort element, produce key
        s = strs[i];
        // inplace sort
        std::sort(s.begin(),s.end());
        // add sorted key to map and array val
        myMap[s].push_back(strs[i]);
    }

    //loop through map and get result array
    for(const auto& pair: myMap){
        // insert each array of anagrams into result array
        result.push_back(pair.second);
    }

    //return array of array of strings

    return result;
      
    }
};



