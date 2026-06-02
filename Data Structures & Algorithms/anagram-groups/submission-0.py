class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:

        trueDict = collections.defaultdict(list)
        for x in strs:
            trueDict[tuple(sorted(x))].append(x)
        return list(trueDict.values())
        