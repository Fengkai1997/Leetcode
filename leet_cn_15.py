class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        n = len(nums)
        res = []
        nums.sort()
        if n<3:
            return res
        for i in range(n):
            left = i+1
            right = n-1
            if nums[i] > 0:
                return res
            if i>=1 and nums[i]==nums[i-1]:
                continue
            while left < right:
                total = nums[i] + nums[left] + nums[right]
                if total > 0:
                    right = right - 1
                elif total < 0:
                    left = left + 1
                else:
                     res.append([nums[i],nums[left],nums[right]])
                     while left != right and nums[left] == nums[left + 1]: left += 1
                     while left != right and nums[right] == nums[right - 1]: right -=1
                     left = left + 1
                     right = right - 1
        return res 
