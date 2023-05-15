#DECLARACIÓN DE FUNCIÓN DE BUSQUEDA
def buscar_valor_en_lista(lista, valor):
    if valor in lista:
        return print("El valor ha sido encontrado")
    else:
        return print("El valor no ha sido encontrado")
#CREACCIÓN DE LISTAS
mi_lista = [1, 3, 5, 7, 9]
#LLAMADO Y RESULTADO
resultado = buscar_valor_en_lista(mi_lista, 3)
print(resultado) 
