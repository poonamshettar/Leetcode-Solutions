class Solution(object):
    def convert(self, s, numRows):
        """
        :type s: str
        :type numRows: int
        :rtype: str
        """
        if numRows==1 or numRows>=len(s):
            return s
        x=[[] for i in range(numRows)]
        d=1
        r=0
        for i in s:
            x[r].append(i)
            if r==0:
                d=1
            elif r==numRows-1:
                d=-1
            r+=d
        for i in range(numRows):
            x[i]=''.join(x[i])
        return ''.join(x)

