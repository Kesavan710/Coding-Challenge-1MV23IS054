n=int(input("enter the number of fibonacci elements"))
a=0
b=1
for i in range(0,n):
    print(a)
    c=a+b
    a=b
    b=c