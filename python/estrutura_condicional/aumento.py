salario = float(input("Digite o salario da pessoa: "))

if salario <= 1000.0:
    porcentagem = 20
    aumento = (salario * porcentagem) / 100
    novo = salario + aumento
elif salario > 1000.0 and salario <= 3000.0:
    porcentagem = 15
    aumento = (salario * porcentagem) / 100
    novo = salario + aumento
elif salario > 3000.0 and salario <= 8000.0:
    porcentagem = 10
    aumento = (salario * porcentagem) / 100
    novo = salario + aumento
else:
    porcentagem = 5
    aumento = (salario * porcentagem) / 100
    novo = salario + aumento

print(f"Novo salario = {novo:.2f}")
print(f"Aumento = {aumento:.2f}")
print(f"Porcentagem = {porcentagem} %")
