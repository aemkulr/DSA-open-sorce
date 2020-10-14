print("Welcome!!This is a Simple Calculator!!!")
while True:
    b=float(input("Enter first operend:"))
    a=float(input("Enter second operend:"))
    ch=input("Enter choice for mathematical function(+,-,/,*) : ")
    if (ch=='+'):
      print("So you wanna add,ok, the sum of the two numbers is -->",a+b)
    elif (ch=='-'):
        if (a>=b):
          print("Here,First number is greater than the Second number,so,the difference of the two numbers is -->",a-b)
        else:
          print("Here,Second number is greater than the First number,so,the difference of the two numbers is -->",b-a)
    elif (ch=='*'):
        print("So, the product of the two numbers is:",a*b)
    elif (ch=='/'):
        if (a>=b):
          print("So, quotient of the two numbers is:",a/b)
        else:
            print("So, quotient of the two numbers is:",b/a)
    else:
        print("Enter valid input.")
    ask=input("Do you wanna perform more functions(yes/no)??")
    if (ask=='no' or ask=='No' or ask=='NO'):
        break
