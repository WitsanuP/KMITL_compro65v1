def average(list):
    ### BEGIN SOLUTION
    return sum(list)/len(list)
    ### END SOLUTION


print(average([1,2,3,4,5,6,7,8,9])) # Expected result: 5.0
print(average([1.1,2.2,3.3,4.4,5.5])) # Expected result: 3.3
print(average([9.93,5.3432,9.43423,1.2344,0.3523])) # Expected result: 5.258826



# For Test-run
# รันโค้ดต่อไปนี้ ถ้าได้ผลลัพธ์ 'True' 2 ครั้ง ถือว่า "ผ่าน"
import numpy as np

lst1 = np.random.randint(10, size=20)
lst2 = 10*np.random.random_sample(20)

print(average(lst1)==lst1.mean())
print('True' if abs(average(lst2)-lst2.mean())<1e-10 else 'False')
