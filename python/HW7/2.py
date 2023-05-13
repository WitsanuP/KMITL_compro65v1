# [HW] Calculate f(x)= x**2+6x+5 = 0 using Newton's Method
### BEGIN SOLUTION
o=1
n=100
while((o**2+6*o+5)>0.00000000000000001):
    n=o-(o**2+6*o+5)/(2*o+6)
    o=n
print(n)
### END SOLUTION
