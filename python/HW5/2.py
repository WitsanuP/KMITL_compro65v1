# เขียนโค้ดด้านล่าง แล้วกด Shift+Enter
def reverse(list1):
    ### START SOLUTION
    dic={}
    for number,i in enumerate(list1):
        dic[i]=number
    return dic
    ### END SOLUTION
    
    
print(reverse(['apple', 'pen', 'orange']) == {'apple': 0, 'orange': 2, 'pen': 1})
 
