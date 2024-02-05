def GCD(a, b):
    while b != 0:
        a, b = b, a%b
    return a

n = int(input())
m = []
count, cc = 0, 0

for i in range(n):
    m.append(int(input()))
    
m.sort()

l = m[1] - m[0]

for i in range(len(m) - 1):
    l = GCD(m[i + 1] - m[i], l)
    
for i in range(1, len(m)):
    count += (m[i] - m[i-1]) / l - 1
    

print(int(count))