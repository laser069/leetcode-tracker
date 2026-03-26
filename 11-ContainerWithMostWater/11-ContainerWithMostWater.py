# Last updated: 3/26/2026, 1:28:07 PM
class Solution:
    def maxArea(self, height: List[int]) -> int:
        l = 0
        r = len(height)-1
        maxlen = 0
        while(l<r):
            he = min(height[l],height[r])
            maxlen = max(maxlen,he*(r-l))
            if(he == height[l]):
                l+=1
            else:
                r-=1
        return maxlen
        