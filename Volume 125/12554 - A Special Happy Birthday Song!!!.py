n = int(input())
people = []
for i in range(n):
    people.append(input())
words = ["Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"]
c = len(words)
w = 0
p = 0
sung = False
while True:
    print("{0}: {1}".format(people[p], words[w]))
    p += 1
    if p == n:
        sung = True
    p %= n
    w = (w + 1)%c
    if w == 0 and sung:
        break