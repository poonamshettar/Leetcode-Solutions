class Solution(object):
    def rotateString(self, s, goal):
        """
        :type s: str
        :type goal: str
        :rtype: bool
        """
        if len(s)!=len(goal):
            return False
        new=s+s
        return new.find(goal)!=-1
        