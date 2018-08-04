x=input("enter string : ")
y=set(x)
t=[]
for i in y:
    t.append(x.count(i))
t.sort()
flag=0
for i in range(0,len(t)-2):
    if(t[i]+t[i+1]!=t[i+2]):
        flag=1
if(flag==1):
    print("no")
else:
    print("yes")
    