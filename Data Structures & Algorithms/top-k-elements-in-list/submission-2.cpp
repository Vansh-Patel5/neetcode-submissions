class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int, int> myMap;
        std:: vector<vector<int>> freq (nums.size()+1);
        std:: vector<int> result;
        //[0,1,2,3,4,5]
        for (int i = 0; i < nums.size(); i++){
            myMap[nums[i]]++;
        }

        for(const auto& pair: myMap){
            freq[pair.second].push_back(pair.first);
        }

        for (int j = freq.size()-1; j >= 0; j--){
            for(int n: freq[j]){
                result.push_back(n);
                if(result.size() == k){
                    return result;
                }
            }
        }
    }

};
