# Problem: Reverse Words in a String - LeetCode 75

class Solution:
    def reverseWords(self, s: str) -> str:
        l = s.split()
        l.reverse()
        return ' '.join(l)


s = input()
solve = Solution()
print(solve.reverseWords(s))

