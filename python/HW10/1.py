# Skeleton code
class analysedText:
    ### BEGIN SOLUTION
    def __init__ (self, text):
        fmtText=text.replace('.','').replace(',','').replace('!','').replace('?','').lower()
        self.fmtText = fmtText
        #print(fmtText)
        
    
    def freqAll(self):   
        ans ={}
        word_list = self.fmtText.split(" ")
        for word in word_list:
            if word not in ans:
                ans[word] = 1
            else:
                ans[word] += 1
        #print(ans)
        self.ans=ans
        return ans
    
    def freqOf(self,word):
        return self.ans.get(word)
    ### END SOLUTION

