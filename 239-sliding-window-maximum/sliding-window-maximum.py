class Solution:
    def maxSlidingWindow(self, nums: list[int], k: int) -> list[int]:
        ans=[]
        l=[]
        i,j=0,0

        while j<len(nums):
            while l and l[-1]<nums[j]:
                l.pop()
            l.append(nums[j])

            #window not completed
            if(j-i)+1<k:
                j+=1
            elif(j-i)+1==k:
                ans.append(l[0])
                #remove i
                if l[0]==nums[i]:
                    l.pop(0)

                i+=1
                j+=1
        return ans

