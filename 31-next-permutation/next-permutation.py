class Solution:
    def nextPermutation(self, nums: list[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
         # Rearranges nums into the next lexicographic permutation.
    def nextPermutation(self, nums: list[int]) -> None:
        n = len(nums)
 
        # A single value cannot move to a different permutation.
        if n <= 1:
            return
 
        pivot = n - 2
 
        # Search for the rightmost position that can be increased.
        while pivot >= 0 and nums[pivot] >= nums[pivot + 1]:
            pivot -= 1
 
        # A fully non-increasing array has no greater permutation.
        if pivot < 0:
            nums.sort()
            return
 
        successor = pivot + 1
 
        # Find the smallest suffix value greater than the pivot value.
        for index in range(pivot + 1, n):
            # A better successor is greater than the pivot but smaller than the current successor.
            if nums[index] > nums[pivot] and nums[index] <= nums[successor]:
                successor = index
 
        nums[pivot], nums[successor] = nums[successor], nums[pivot]
 
        # Minimize the suffix after the pivot has been increased.
        nums[pivot + 1:] = sorted(nums[pivot + 1:])