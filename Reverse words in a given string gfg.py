class Solution:
    
    #Function to reverse words in a given string.
    def reverseWords(self,S):
        # code here 
        a=S.split(".")
        b=a[::-1]
        c='.'.join(b)
        return c
