N = int(input())

age = []
nlist = []

for i in range(N):
    a, n = map(str, input().split())
    age.append(a)
    nlist.append(n + ' ' + age)

