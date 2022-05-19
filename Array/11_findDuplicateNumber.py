# ramnitcode27
# Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
# There is only one repeated number in nums, return this repeated number.
# You must solve the problem without modifying the array nums and uses only constant extra space.

from ast import List

class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        # return (sum(nums)-sum(set(nums)))//(len(nums)-len(set(nums)))
        slow,fast=0,0
        while True:
            slow=nums[slow]
            fast=nums[nums[fast]]
            if fast==slow:
                break
        idx=0
        while True:
            slow=nums[slow]
            idx=nums[idx]
            if slow==idx:
                return slow
        return -1