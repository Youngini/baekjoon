import sys
S = sys.stdin.readline()
S = S.strip()
n = len(S)
sub_S = set()
for i in range(n):
    for j in range(n):
        if(j+i<n):
            sub_S.add(S[j:j+i+1])
        else:
            break

print(len(sub_S))