from collections import defaultdict, deque
from functools import lru_cache

@lru_cache(maxsize=None)
def bfs(srcx, srcy, destx, desty):
    q = deque([(srcx, srcy, 0)])
    visited = defaultdict(lambda:False)
    visited[(srcx, srcy)] = True
    while len(q) != 0:
        i, j, cost = q.popleft()
        if i == destx and j == desty:
            return cost
        for x, y in [(1, 2), (-1, 2), (1, -2), (-1, -2), (2, 1), (2, -1), (-2, 1), (-2, -1)]:
            if 0 <= i + x < 8 and 0 <= j + y < 8 and not visited[(i + x, j+y)]:
                visited[(i + x, j+y)] = True
                q.append((i + x, j+y, cost + 1))
        

while True:
    try:
        start, end = input().split()
    except:
        break
    srcx = ord(start[0]) - ord('a')
    srcy = int(start[1]) - 1
    destx = ord(end[0]) - ord('a')
    desty = int(end[1]) - 1
    
    print("To get from {0} to {1} takes {2} knight moves.".format(start, end, bfs(srcx, srcy, destx,desty)))