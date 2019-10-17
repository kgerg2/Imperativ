sor, oszl = tuple(map(int, input().split()))
matr = [list(map(int, input().split())) for _ in range(sor)]
matr = [[matr[i][j] for i in range(sor)] for j in range(oszl)]
print("\n".join([" ".join(map(str, sor)) for sor in matr]))
