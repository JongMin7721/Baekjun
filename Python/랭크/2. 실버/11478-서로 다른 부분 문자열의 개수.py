word = input()

n = len(word)
s = set()

for i in range(n):
    for j in range(i,n):
        s.add(word[i:j+1])
        
print(len(s))