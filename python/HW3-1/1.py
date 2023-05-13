kedmanee = (('ภ','ถ','ค','ต','จ','ข','ช'), \
            ('ฎ','พ','ฑ','ธ','ร','ณ','น','ย','ญ','บ','ฐ','ล','ฃ','ฅ'), \
            ('ฟ','ห','ฆ','ก','ฏ','ด','ฌ','ษ','ส','ศ','ว','ซ','ง'), \
            ('ผ','ป','ฉ','อ','ฮ','ท','ม','ฒ','ฬ','ฝ'))

### BEGIN SOLUTION
print("===== แถว 1 =====\n")
for i in kedmanee[0]:
    print(i, sep=' ', end=' ')
print("\n===== แถว 2 =====")
line21=[0,2,5,8,10,-1]
for i in line21:
    print(kedmanee[1][i],sep=' ',end=' ')
print('')
line21=[1,4,6,7,9,11,12]
for i in line21:
    print(kedmanee[1][i],sep=' ',end=' ')
print("\n===== แถว 3 =====")
line31=[2,4,6,7,9,11]
line32=[0,1,3,5,8,10,-1]
for i in line31:
    print(kedmanee[2][i],sep=' ',end=' ')
print('')
for i in line32:
    print(kedmanee[2][i],sep=' ',end=' ')
print("\n===== แถว 4 =====")
line41=[2,4,7,-2]
line42=[0,1,3,5,6,-1]
for i in line41:
    print(kedmanee[3][i],sep=' ',end=' ')
print("")
for i in line42:
    print(kedmanee[3][i],sep=' ',end=' ')
    
print('')
### END SOLUTION
