class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        length = len(nums)
        result = []
        for i in range(0,length-1):
            for j in range(i+1,length):
                tSum = nums[i] + nums[j]
                if tSum == target: 
                    result.append(i)
                    result.append(j)
                    return result
        
