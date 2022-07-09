print("Digite dois numeros: ")
numero1 = int(input())
numero2 = int(input())

if numero1 > numero2:
    troca = numero1
    numero1 = numero2
    numero2 = troca
    
soma = 0
for i in range(numero1+1, numero2):
    if i % 2 != 0:
        soma = soma + i
    
print(f"SOMA DOS IMPARES = {soma}")
