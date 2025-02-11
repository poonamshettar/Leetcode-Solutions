class Solution:
    def removeOccurrences(self, s: str, part: str) -> str:
        x=[]
        l=len(part)
        for char in s:
            x.append(char)
            if len(x)>=l and self.check(x,part,l):
                for _ in range(l):
                    x.pop()
        return "".join(x)
    def check(self,x:list,part:str,l:int):
        return "".join(x[-l:])==part
