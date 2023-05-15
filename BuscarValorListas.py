def buscar_valor_en_lista(lista, valor):
    if valor in lista:
        return print("El valor ha sido encontrado")
    else:
        return print("El valor no ha sido encontrado")
mi_lista = [1, 3, 5, 7, 9]
resultado = buscar_valor_en_lista(mi_lista, 3)
print(resultado) 
