N, s = map(int, input().split())

lst = []

for i in range(N):
  A, B = map(int, input().split())

  lst.append([A, B])

lst.sort(key=lambda x: x[0])

now = 0

for next_, coin in lst:
  if next_ - now > s:
    now += s
    print(now)
    exit()

  s -= next_ - now
  s += coin
  now = next_

now += s
print(now)
