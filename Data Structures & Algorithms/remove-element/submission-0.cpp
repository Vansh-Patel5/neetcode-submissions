class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int valCount = 0; // dont need
        int goodPos = 0;
        for(int i = 0; i < std::size(nums);i++){
            if(nums[i] == val){
                nums[i] = 0; //dont nide
                valCount ++;
            }else{
                nums[goodPos] = nums[i];
                goodPos++;
            
            }
        }
        return goodPos;
        
    }
};

//loop through the array but each time we see val, we overwrite it
// final intuition is literally just maintain pos of where the value should be inserted
//now that have u track of it, correct val is just placed there and you increment
//now it points to the pos to swap a value into
// good pos maps to same spot until illegal element, points to that location to put new val