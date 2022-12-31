import sys
att = []
for i in range(1,31):
    att.append(i)

for i in range(28):
    a = int(sys.stdin.readline())
    att[a-1] = 0

for i in att:
    if(i!=0):
        print(i)
