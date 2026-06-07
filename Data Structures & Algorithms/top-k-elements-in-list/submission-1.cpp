class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // create a map of each element and its frequency
        // loop through map and return key most frequent elements

        unordered_map<int,int> freqMap;
        // build buckets of frequency from 0 to max length of array
        // each bucket contains all the elements of that frequency
        // when looping through the buckets backwards (from highest freq)
        // if bucket size = k; return bucket
        vector<vector<int>> freq(nums.size() + 1);
        vector<int> result;

        //loop through array
        for (int i = 0; i < nums.size(); i++) {
            //make key the current num
            // how can i just add one to the current value in there
            freqMap[nums[i]]++;
        }

        // we want to map each frequency to a set of elements
        for(const auto& pair:freqMap){
            freq[pair.second].push_back(pair.first); 
        }

        // loop through result buckets array and loop through buckets
        // each bucket = numbers of said freq starting from max freq
        // do so backwards

        for (int j = freq.size()-1; j > 0; j--){
            for (int n : freq[j]){
                result.push_back(n);
                if(result.size() == k){
                    return result;
                }
            }
        }
    }
};
