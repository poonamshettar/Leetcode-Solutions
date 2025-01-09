class Solution:
    def prefixCount(self, words: List[str], pref: str) -> int:
       x=len(pref)
       c=0
       for i in words: 
        if(i[:x]==pref):
            c+=1
       return c