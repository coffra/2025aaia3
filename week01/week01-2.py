#week01-2.py
#leetcode28
#�j�����w
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        H=len(haystack)
        N=len(needle)
        for i in range(H-N+1):
            if haystack[i:i+N]==needle:
                return i
        return -1
