v=input()
y=0
for i in v:
  if((i=='0')or(i=='1')):
    y=y+1
if(y==len(v)):
  print("yes")
else:
  print("no")
