myinput =input();
print(myinput)
temp=[]
for i in myinput:
    if (i in temp):
        temp.remove(i)
    else:
        temp.append(i)
print(temp)
length = len(temp)
print(length)
if(length==1 or length==0):
    print("It is a Palindrome")
else:
    print("Not a Palindrome")
