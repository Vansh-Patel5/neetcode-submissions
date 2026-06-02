class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxOne = 0;
        int countOne = 0;
        for(int i = 0; i < std::size(nums); i++)
        {
            if (nums[i] == 1){
                countOne++;
                if (countOne > maxOne){
                    maxOne = countOne;
                }
            } else {
                countOne = 0;
            }
        }
        return maxOne;
    }
    
};

//can replace maxOne = max(maxOne, countOne)

// loop through the array
// each time one is spotted, you increase the count and if the count > maxCount
// maxCount = count
//count = 0