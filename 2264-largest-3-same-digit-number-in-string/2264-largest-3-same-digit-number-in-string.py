class Solution:
    def largestGoodInteger(self, num: str) -> str:
        dig='\0'
        for i in range(len(num)-2):
            if num[i]==num[i+1]==num[i+2]:
                dig=max(dig,num[i])
        return '' if dig=='\0' else dig*3