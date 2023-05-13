# HW: BMI Evaluation
# By using the skeleton of code below.

def bmi_evaluate(w, h):
    '''
    คำนวณค่า BMI โดยน้ำหนัก (w) มีหน่วยเป็น kg และส่วนสูง (h) มีหน่วยเป็น cm
    แล้วประเมินความสมดุลของน้ำหนักตัวต่อส่วนสูงว่าอยู่ในเกณฑ์ที่เหมาะสมหรือไม่
    '''
    bmi_value = w / (h/100)**2
    
    ### BEGIN SOLUTION
    if bmi_value>30:
        return "โรคอ้วนอันตราย"
    elif 29.9>=bmi_value>=25:
        return "โรคอ้วน"
    elif 24.9>=bmi_value>=23:
        return "น้ำหนักเกิน"
    elif 22.9>=bmi_value>=18.5:
        return "สมส่วน"
    elif bmi_value<18.5:
        return "น้ำหนักต่ำกว่าเกณฑ์"
    else :
        return "BUG"
    #pass

    ### END SOLUTION

    return result

height = float(input("ส่วนสูง (cm)? "))
weight = float(input("น้ำหนัก (kg)? "))

print(bmi_evaluate(weight, height))
