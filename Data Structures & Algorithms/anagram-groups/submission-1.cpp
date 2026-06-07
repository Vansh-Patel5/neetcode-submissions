class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector <string>> myMap;
        std:: string s;
        std:: vector<vector<string>> result;
        
        for(int i=0; i < strs.size(); i++){
            s = strs[i];
            std::sort(s.begin(), s.end());
            myMap[s].push_back(strs[i]);
        }
        for (auto& pair:myMap){
            result.push_back(pair.second);
        }

        return result;
    }
};


//loop through the words
//first word becomes the check, new str sublist with that word
// remove word from full list 2.
// loop to the next word and see if all the char are in the first 3.
// if yes, then add the word to the list 4.
// remove said word 5.
//if no match then start new sublist with that word 2-5.
// [[act,cat]]
// [pots, tops, stop, hat]
// [[act,cat] , [pots,tops,stop]]
// [hat]
// [[act,cat] , [pots,tops,stop], [hat]]
// []
