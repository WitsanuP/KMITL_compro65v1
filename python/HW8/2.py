# HW: Mean (Average) Function
def my_mean(*values):
    '''
    คืนค่าเฉลี่ย (Mean)
    
    This is a test:
    >>> my_mean(45)
    45.0
    >>> my_mean(45,32)
    38.5
    >>> my_mean(45,32,89,78)
    61.0
    >>> my_mean(8989.8,78787.78,3453,78778.73)
    42502.3275
    >>> my_mean()
    '''
    ### BEGIN SOLUTION
    sum=0;
    if not values:
        return
    for i in values:
        sum+=i
    return sum/len(values)
    
    ### END SOLUTION
