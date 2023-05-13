# HW: Fibonacci sequence
# ลำดับฟีโบนักชีโดยใช้การเรียกซ้ำ (Recursion)

def fibo_n(n):
    """
    Function: Fibonacci numbers (Fn): F0=0, F1=1, Fn=Fn-1+Fn-2
    Objective: To compute the value of Fn.
    Input: nth
    Output: nth Fibonacci number
    """
    ### BEGIN SOLUTION
    if not n:
        return 0
    elif n == 1:
        return 1
    else:
        return fibo_n(n-1) + fibo_n(n-2)
    
    ### END SOLUTION
    
# แสดงเลขฟีโบนักชีลำดับที่ 0 ถึงลำดับที่ 20
for i in range(21):
       print('F({}): {}'.format(i, fibo_n(i)) )
