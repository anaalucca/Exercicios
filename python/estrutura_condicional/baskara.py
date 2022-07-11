preco = float(input("Preço unitario do produto: "))
quantidade = int(input("Quantidade comprada: "))
dinheiro = float(input("Dinheiro recebido: "))

falta = (preco * quantidade) - dinheiro

if (falta > 0.0):
    print(f"DINHEIRO INSUFICIENTE. FALTAM {falta:.2f} REAIS")
else:
    troco = dinheiro - (preco * quantidade)
    print(f"TROCO = {troco:.2f}")
