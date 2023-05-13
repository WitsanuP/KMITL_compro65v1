# เขียนโค้ดระหว่าง #BEGIN SOLUTION และ ### END SOLUTION แล้วกด Shift+Enter
#BEGIN SOLUTION
newton_quote = 'To any action there is always an opposite and equal reaction; in other words, the actions of two bodies upon each other are always equal and always opposite in direction.'
newton_quote=newton_quote.replace(';','')
newton_quote=newton_quote.replace(',','')
word_list=newton_quote.split(' ')
print(word_list, '\n')
### END SOLUTION

print(word_list ==  ['To', 'any', 'action', 'there', 'is', 'always', 'an', 'opposite', 'and', 
               'equal', 'reaction', 'in', 'other', 'words', 'the', 'actions', 'of', 'two', 
               'bodies', 'upon', 'each', 'other', 'are', 'always', 'equal', 'and', 'always', 
               'opposite', 'in', 'direction.'])
