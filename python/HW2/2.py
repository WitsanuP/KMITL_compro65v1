def remove_at(input_string, index):
    ### BEGIN SOLUTION
    #input_string=input_string[0:index]+input_string[index+1:]
    return input_string[0:index]+input_string[index+1:]
    ### END SOLUTION

string = 'ลองเคี้ยวหมากฝรั่งดูเผื่อหายง่วง'
index = int(input('ใส่เลข Index ของตัวอักษรที่ต้องการตัด: '))
print(remove_at(string, index))



# For test-run
# รันโค้ดต่อไปนี้ ถ้าได้ผลลัพธ์ 'True' 2 ครั้ง ถือว่าผ่าน

string1 = 'ลองเคี้ยวหมากฝรั่งดูจะได้หายง่วง'
string2 = 'ผมตกข่าวมากเลยครับ เกือบจะไม่ได้ไปดูงาน NIKON DAY 2006 แล้ว'

print("ผลการทดสอบ:")
print(remove_at(string1, string1.find('ก'))=='ลองเคี้ยวหมาฝรั่งดูจะได้หายง่วง')
print(remove_at(string2, string2.find('่'))=='ผมตกขาวมากเลยครับ เกือบจะไม่ได้ไปดูงาน NIKON DAY 2006 แล้ว')
