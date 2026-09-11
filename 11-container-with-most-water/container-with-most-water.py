class Solution:
    def maxArea(self, height: List[int]) -> int:
        largest =  0 
        l  = 0 
        r = len(height) -1 
        while l < r:
            area = (r-l) * min(height[l],  height[r])
            largest = max(area,largest)


            if height[l] > height[r]:
                r-=1 
            elif height[r] > height[l]:
                l+=1 
            else:
                r-=1
                l+=1
        return largest