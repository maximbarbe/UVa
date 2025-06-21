t = int(input())
for i in range(t):
    pos = 0
    n = int(input())
    cmds = []
    for i in range(n):
        c = input()
        if c == "LEFT":
            cmds.append(-1)
            pos -= 1
        elif c == "RIGHT":
            cmds.append(1)
            pos += 1
        else:
            idx = int(c.split()[-1]) - 1
            pos += cmds[idx]
            cmds.append(cmds[idx])
    print(pos)