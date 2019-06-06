c=list(map(int,input().split()))
c[0]=c[0]^c[1]
c[1]=c[0]^c[1]
c[0]=c[0]^c[1]
print(c[0],c[1])
