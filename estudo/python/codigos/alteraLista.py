entrada = [1,2,3,[4.1,[4.21,4.22,4.23,'joao',4.24], 4.3], 5, 6, 7]

def alteraLista(lista):
	for i in lista:
		if type(i) is type(list()):
			alteraLista(i)
		else:
			if type(i) != str:
				if i % 2 == 0:
					lista[lista.index(i)]*= lista.index(i)
				elif i % 2 == 1:
					lista[lista.index(i)]-= lista.index(i)	
			else:
				temp = ''
				for j in range(lista.index(i)):
					temp += i[0]
				lista[lista.index(i)] = temp + lista[lista.index(i)]
	return lista 

print(alteraLista(entrada))