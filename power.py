a=int(input())
n=a
count=0
while (n!=1):
    n=n//2
    count=count+1
b=2**count
if (a==b):
    print("yes")
else:print("no")
