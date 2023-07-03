from typing import List

class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        n = len(nums)
        k = k % n
        
        temp = nums.copy()
        
        for i in range(n):
            nums[(i + k) % n] = temp[i]
