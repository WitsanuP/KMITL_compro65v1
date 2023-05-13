# เขียนโค้ดด้านล่าง แล้วกด Shift+Enter
### START SOLUTION
days = {
    'Monday' : 'วันจันทร์',
    'Tuesday' : 'วันอังคาร',
    'Wednesday' : 'วันพุธ',
    'Thursday' : 'วันพฤหัสบดี',
    'Friday' : 'วันศุกร์',
    'Saturday' : 'วันเสาร์',
    'Sunday' : 'วันอาทิตย์',
    }
### END SOLUTION



# For test-run
# รันโค้ดต่อไปนี้ ถ้าได้ผลลัพธ์ 'passed' 7 ครั้ง ถือว่าผ่าน

days_thai = ['วันจันทร์','วันอังคาร','วันพุธ','วันพฤหัสบดี','วันศุกร์','วันเสาร์','วันอาทิตย์']
days_eng = ['Monday','Tuesday','Wednesday','Thursday','Friday','Saturday','Sunday']

for d in range(len(days_eng)):
    try:
        if days[days_eng[d]] == days_thai[d]:
            print(days_thai[d],': passed')
    except:
        print(days_thai[d],': failed')
