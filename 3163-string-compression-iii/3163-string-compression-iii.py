class Solution(object):
    def compressedString(self, word):
        """
        :type word: str
        :rtype: str
        """
        if not word:  # Check for empty string
            return ""

        ans = ""
        count = 1

        for i in range(1, len(word)):
            if word[i] == word[i - 1] and count < 9:
                count += 1
            else:
                ans += str(count) + word[i - 1]
                count = 1

        # Add the last character group
        ans += str(count) + word[-1]
        
        return ans
