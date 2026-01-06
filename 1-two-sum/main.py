class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        a = len(nums)
        b = a-1
        for i in range(a):
            if i < b:
                for j in range(i+1, a):
                    if (nums[i] + nums[j]) == target:
                        return [i, j]
