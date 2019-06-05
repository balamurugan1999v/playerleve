a=input()
for i in a:
  if i<='z' and i>='a':
    o=ord(i)-32
    print(chr(o),end ="")
  elif i>='A' and i<='z':
    o=ord(i)+32
    print(chr(o),end ="")
