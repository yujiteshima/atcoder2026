n, x = map(int, input().split())
A = list(map(int, input().split()))

found = False

for a in A:
    if a == x:
        found = True

if found:
    print("Yes")
else:
    print("No")
