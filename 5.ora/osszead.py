sor, oszl = tuple(map(int, input().split()))
matr = [list(map(int, input().split())) for _ in range(sor)]
matr = [list(map(sum, zip(matr[i], map(int, input().split())))) for i in range(sor)]
print("\n".join([" ".join(map(str, sor)) for sor in matr]))
