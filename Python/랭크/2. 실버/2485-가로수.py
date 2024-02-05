def GCD(a, b):
    while b != 0:
        a, b = b, a%b
    return a

n = int(input())
m = []
count = 0

for i in range(n):
    m.append(int(input()))
    
m.sort()

l = m[1] - m[0]

for i in range(len(m) - 1):
    l = GCD(m[i + 1] - m[i], l)
    
i, cc = 0, m[0]
while(cc != m[-1]):
    if(cc == m[i]):
        i += 1
        cc += l
    else:
        count += 1
        cc += l

print(int(count))