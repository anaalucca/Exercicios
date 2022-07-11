inicial = int(input("Hora inicial: "))
final = int(input("Hora final: "))

if inicial < final:
    duracao = final - inicial
else: 
    duracao = 24 - (inicial - final)
    
print(f"O JOGO DUROU {duracao} HORA(S)")
