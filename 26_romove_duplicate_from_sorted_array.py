class Solution(object):
    def removeDuplicates(self, nums):
        nums[:] = sorted(set(nums))
        return len(nums)

s1 = Solution()
nums = [1,1,2] #Should return 2  #return length of nums that don't duplicate
print(s1.removeDuplicates(nums))
