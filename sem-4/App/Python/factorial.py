a = int(input("Enter no. of your choice"))
if (a < 0):
    print("Factorial for negative number is not possible")
elif (a == 0):
    print("Factorial is", a)
else:
    fact = 1
    for i in range(1, a+1):
        fact = fact*i
    print("The factorial of input is", fact)
