def upside_down(input_string):
    ### BEGIN SOLUTION
    gg='abcdefghijklmnopqrstuvwxyz'
    output=input_string[:]
    for num,i in enumerate(input_string):
        index=gg.find(i)
        if(-1!=index):
            input_string=input_string[:num]+gg[~index]+input_string[num+1:]
    return input_string
    
    ### END SOLUTION
    
string = 'abcdefghijklmnopqrstuvwxyz'
print(upside_down(string)) # ผลลัพธ์ที่คาดหวัง 'zyxwvutsrqponmlkjihgfedcba'

# For test-run
# รันโค้ดต่อไปนี้ ถ้าได้ผลลัพธ์ 'True' 2 ครั้ง ถือว่าผ่าน

string1 = "Ig'h yvhg gl ovg svi tl"
string2 = 'A dziirli wlvh mlg trev fk dszg sv olevh, sv urmwh gsv olev rm dszg sv wlvh'
print("ผลการทดสอบ:")
print(upside_down(string1)=="It's best to let her go")
print(upside_down(string2)=="A warrior does not give up what he loves, he finds the love in what he does")
