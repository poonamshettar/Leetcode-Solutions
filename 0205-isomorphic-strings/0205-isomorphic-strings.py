class Solution(object):
    def isIsomorphic(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        x={}
        y={}
        for i in range(len(s)):
            if s[i] not in x:
                x[s[i]]=i
            if t[i] not in y:
                y[t[i]]=i
            if x[s[i]]!=y[t[i]]:
                return False
        return True
        