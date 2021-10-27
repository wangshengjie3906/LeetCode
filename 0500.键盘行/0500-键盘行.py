class Solution:
    def findWords(self, words):
        ret, lines = [], ["qwertyuiop", "asdfghjkl", "zxcvbnm"]
        for word in  words:
            for line in lines:
                if not (set(word.lower()) - set(line)):
                    ret.append(word)
                    break
        return ret
