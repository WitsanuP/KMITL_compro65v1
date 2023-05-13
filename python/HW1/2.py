import math

def heron(a,b,c):
    s=(a+b+c)/2
    return math.sqrt(s*(s-a)*(s-b)*(s-c))
  
  
  
print(heron(3,4,5) == 6)
print(heron(3,6,7) == 8.94427190999916)
print(heron(5,12,13) == 30.0)
print(heron(5.5,12.12,13.13)==33.30886109932873)
