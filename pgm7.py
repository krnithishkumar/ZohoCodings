stack = []
s = input()
for i in s:
  if i in ['{','(','[']:
    stack.append(i)
  elif(len(stack)!=0):
    if(i == '}' and stack[-1]=='{'):
      stack.pop()
    elif(i==')' and stack[-1]=='('):
      stack.pop()
    elif(i==']' and stack[-1]=='['):
      stack.pop()
    else:
      print("Not Balanced")
      exit(0)
  else:
    print("Not Balanced")
    exit(0)
  #print(stack)
if(stack == []):
  print("Balanced")
else:
  print("Not Balanced")
