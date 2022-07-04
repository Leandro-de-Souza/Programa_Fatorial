
N = int(input("Digite o valor de N: "))

fatorial = 1

for i in range(N, 1, -1):
    fatorial = fatorial * i

print(f"FATORIAL = {fatorial}")