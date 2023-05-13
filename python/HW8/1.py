# HW: Convert C to F
def fahrenheit(celcius):
    """ คืนค่ากลับเป็นอุณหภูมิองศาฟาเรนไฮต์ (F) """
    ### BEGIN SOLUTION
    return 9/5*celcius+32
    ## END SOLUTION

    
celcius = int(input('ใส่อุณหภูมิในหน่วยองศาเซลเซียส (C):'))
print('อุณหภูมิในหน่วยองศาฟาเรนไฮต์คือ ', fahrenheit(celcius), 'F')
