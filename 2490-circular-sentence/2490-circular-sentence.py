class Solution(object):
    def isCircularSentence(self, sentence):
        """
        :type sentence: str
        :rtype: bool
        """
        sentence=sentence.split()
        for i in range(1,len(sentence)):
            if sentence[i-1][-1]!=sentence[i][0]:
                return False
        if sentence[0][0]==sentence[len(sentence)-1][-1]:
            return True
        else: return False