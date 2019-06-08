n=int(input())
c=0
for x in range(2,n//2):
    if n%x==0:
        c=1
if c==0:
    print ("yes")
else:
    print("no")
    
