a=int(input("enter your age"))
if(a>=18):
    print("elegible for vote")
    choice=input("enter b for BJP and c for CONGRESS")
    if(choice=='b'):
        print("BJP")
    elif(choice=='c'):
        print("CONGRESS")
    else:
        print("none of the above")
else:
    print("not elegible")
    
