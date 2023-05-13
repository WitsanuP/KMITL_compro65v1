# HW เกมส์เดาตัวเลข
import random # random คือโมดูลที่สามารถสุ่มค่าต่างๆ ที่เรากำหนดไว้ได้ เช่น ค่าตัวเลขระหว่าง 1-100

number = random.randint(0, 100) # สร้างตัวเลขสุ่มระหว่าง 0 ถึง 100.
print("ลองทายตัวเลขปริศนาระหว่าง 0 ถึง 100")

### BEGIN SOLUTION
while(1):
    ans = int(input('ขอทายว่าตัวเลขปริศนาคือ  '))
    if(ans>number):
        print('ค่าที่คีย์สูงเกินไป')
    elif(ans<number):
        print('ค่าที่คีย์ต่ำเกินไป')
    else:
        print('ถูกต้อง, คัวเลขปริศนคือ ',ans)
        break


### END SOLUTION
