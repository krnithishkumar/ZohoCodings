stack = []
s = input()
for i in s:
  if i in ['{','(','[']:
    stack.append(i)
  elif(i == '}' and stack[-1]=='{'):
    stack.pop()
  elif(i==')' and stack[-1]=='('):
    stack.pop()
  elif(i==']' and stack[-1]=='['):
    stack.pop()
  else:
    print("Not Balanced")
    exit(0)
if(stack == []):
  print("Balanced")
else:
  print("Not Balanced")
