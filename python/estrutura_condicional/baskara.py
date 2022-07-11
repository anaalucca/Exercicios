import math

a = int(input("Coeficiente a: "))
b = int(input("Coeficiente b: "))
c = int(input("Coeficiente c: "))

delta = b ** 2.0 - 4.0 * a * c

if (a == 0 or delta < 0):
    print("Esta equacao nao possui raizes reais")
else: 
    raiz1 = (-b + math.sqrt (delta)) // (2.0 * a)
    raiz2 = (-b - math.sqrt (delta)) // (2.0 * a)
    
    print(f"X1 = {raiz1:.4f}")
    print(f"X2 = {raiz2:.4f}")
