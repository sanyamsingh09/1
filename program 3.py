a=int(input(" enter starting point"))
b=int(input("enter ending point"))
c=int(input("enter updation"))
choice=input("select h for horizontal and v for vertical")
if(choice=='h'):
    choicetwo=input("enter r for reverse and f for forward")
    if(choicetwo=='r'):
        for i in range(b,a,-c):
            print(i,end=" ")
    elif(choicetwo=='f'):
        for i in range(a,b,c):
            print(i,end=" ")
    else:
        print("invalid input")
elif(choice=='v'):
    choicetwo=input("enter r for reverse and f for forward")
    if(choicetwo=='r'):
        for i in range(b,a,-c):
            print(i,)
    elif(choicetwo=='f'):
        for i in range(a,b,c):
            print(i,)
    else:
        print("invalid input")
else:
    print("invalid input")

            
  
