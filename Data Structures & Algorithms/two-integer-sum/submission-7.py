class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        returnString = ["",""]
        
        for i in range (len(nums)-1):
            for j in range (i+1,len(nums)):
                if nums[i]+nums[j] == target:
                    returnString[0] = i
                    returnString[1] = j
                    return returnString
                

        