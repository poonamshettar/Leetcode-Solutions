class Solution(object):
    def clearDigits(self, s):
        """
        :type s: str
        :rtype: str
        """
        x=[]
        for i in s:
            if i.isdigit() and x:
                x.pop()
            else:
                x.append(i)
        return "".join(x)
            
        