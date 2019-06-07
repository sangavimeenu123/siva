n1=input()
n=list(n1)
x=0
y=0
for i in n:
  if i.isalpha():
    x=1+x
for g in n:
  if g.isdigit():
    y=1+y
if(x==y):
    print("yes")
else:
    print("no")
