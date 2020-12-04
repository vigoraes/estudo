from random import randint
n = randint(1,21)
print('N: %d' %n)
soma = 0
maior_somatorio = 0
for i in range(n):
	aleatorio = randint(1,60)
	print(aleatorio)
	soma += aleatorio
	if soma % n == 0:
		print('soma %d' %soma)
		if soma > maior_somatorio:
			maior_somatorio = soma
		soma = 0
if maior_somatorio == 0:
	print('Não houve nenhum somatório múltiplo de N')
else:
	print('Maior somatório: %d' %maior_somatorio)