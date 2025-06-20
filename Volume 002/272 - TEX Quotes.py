first = True
while True:
    try:
        line = input()
    except:
        break
    
    
    for c in line:
        if c != '"':
            print(c, end="")
        else:
            if first:
                print('``', end="")
            else:
                print("''", end="")
            first ^= True
    print()