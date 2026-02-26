class Solution:
    def isStrictlyPalindromic(self, n: int) -> bool:
        s= str(bin(n))
        if (s==s[::-1]): 
            return True
        return False