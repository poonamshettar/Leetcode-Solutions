class Solution:
    def countPrefixSuffixPairs(self, words: List[str]) -> int:
      c=0
      for i in range(len(words)):
        for j in range(i+1,len(words)):
            k=len(words[i])
            if((words[j][:k]==words[i]) and (words[j][-k:]==words[i])):
                c+=1
      return c