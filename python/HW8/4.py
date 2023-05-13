# HW: Caesar cipher
# By using the skeleton of code below.

def caesar(txt, coded_flag=True):
    ''' 
    คืนค่ากลับเป็นแถวตัวอักขระที่ถูกเข้ารหัส (Encode เมื่อ coded_flag=True)
    หรือถอดรหัส (Decode เมื่อ coded_flag=False) 
    เช่น caesar('ABCDEFGHI_12345')-> 'DEFGHIJKL_12345'
        caesar('DEFGHIJKL_12345', False)-> 'ABCDEFGHI_12345'
    '''
    ### BEGIN SOLUTION
    if coded_flag:
        ans=[]
        for i in txt:
            if i=='x':
                ans.append('a')
            elif i=='y':
                ans.append('b')
            elif i=='z':
                ans.append('c')
            elif i=='X':
                ans.append('A')
            elif i=='Y':
                ans.append('B')
            elif i=='Z':
                ans.append('C')
            elif ord("A")<=ord(i)<=ord("Z"):
                ans.append(chr(ord(i)+3))
            elif ord("a")<=ord(i)<=ord("z"):
                ans.append(chr(ord(i)+3))
            else:
                ans.append(i)
                
        return ''.join(ans)
    
    else :
        ans=[]
        for i in txt:
            if i=='a':
                ans.append('x')
            elif i=='b':
                ans.append('y')
            elif i=='c':
                ans.append('z')
            elif i=='A':
                ans.append('X')
            elif i=='B':
                ans.append('Y')
            elif i=='C':
                ans.append('Z')
            elif ord("A")<=ord(i)<=ord("Z"):
                ans.append(chr(ord(i)-3))
            elif ord("a")<=ord(i)<=ord("z"):
                ans.append(chr(ord(i)-3))
            else:
                ans.append(i)
                
                
        return ''.join(ans)

    ### END SOLUTION

test1 = caesar("ABCDEFGHI_12345")   # Expected output: DEFGHIJKL_12345
print(test1)
print(caesar(test1, False))  # Expected output: ABCDEFGHI_12345

test2 = caesar('“THERE ARE THREE WAYS TO ULTIMATE SUCCESS: THE FIRST WAY IS TO BE KIND. THE SECOND WAY IS TO BE KIND. THE THIRD WAY IS TO BE KIND.” —MISTER ROGERS', True)
print(test2=='“WKHUH DUH WKUHH ZDBV WR XOWLPDWH VXFFHVV: WKH ILUVW ZDB LV WR EH NLQG. WKH VHFRQG ZDB LV WR EH NLQG. WKH WKLUG ZDB LV WR EH NLQG.” —PLVWHU URJHUV') # Expected output: True
