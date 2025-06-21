print("Lumberjacks:")
n = int(input())
for i in range(n):
    vals = [*map(int, input().split())]
    if vals == sorted(vals) or vals == sorted(vals, reverse=True):
        print("Ordered")
    else:
        print("Unordered")