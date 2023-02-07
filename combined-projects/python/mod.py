n = 5
def recurs(n):
    if n == 0:
        print(1)
        return 1
    print(n * recurs(n - 1))
    return n * recurs(n - 1)
