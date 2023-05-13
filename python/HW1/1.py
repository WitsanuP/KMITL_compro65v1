def feet_to_cm(f,i): 
    return f*30.48+i*2.54
  
  
def check_similar(x,y): 
    print(abs(x-y)<0.000001)
    
check_similar(feet_to_cm(5,2),157.48)
check_similar(feet_to_cm(6,5),195.58)
