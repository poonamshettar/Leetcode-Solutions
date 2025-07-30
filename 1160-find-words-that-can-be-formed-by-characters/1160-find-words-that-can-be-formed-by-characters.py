class Solution:
    def countCharacters(self, words: List[str], chars: str) -> int:
        x=defaultdict(int)
        for i in chars:
            x[i]+=1
        ans=0
        for word in words:
            word_count=defaultdict(int)
            for i in word:
                word_count[i]+=1
            stat=True
            for w,c in word_count.items():
                if x[w]<c:
                    stat=False 
            if stat:
                ans+=len(word)
        return ans
