n=int((input()))
while(n>0):
    n -= 1
    grade=int(input())
    if grade<38 :
        print(grade)
    elif (grade+1)%5==0 or (grade+2)%5==0:
        grade = grade+1 if (grade+1)%5==0 else grade+2
        print(grade)
    else:
        print(grade) 