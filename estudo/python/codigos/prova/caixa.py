def ler():
	caixas = []
	arq = open('dados1.txt', 'r')
	for i in arq:
		linha = i.strip().split(';')
		caixas.append(linha)
	for loop in range(3):
		altura = int(input('\nDigite a altura do objeto: '))
		largura = int(input('Digite a largura: '))
		profundidade = int(input('Digite a profundidade: ')) 
		menor = ''
		menor_diferença = altura + largura + profundidade
		for i in caixas:
			if int(i[1]) >= altura and int(i[2]) >= largura and int(i[3]) >= profundidade:
				diferença = int(i[1]) - altura + int(i[2]) - largura + int(i[3]) - profundidade
				if diferença < menor_diferença:
					menor_diferença = diferença
					menor = i[0]
		if menor == '':
			print('\tModelo da caixa: FORA DOS PADRÕES')
		else:
			print('\tModelo da caixa: %s' %menor)
ler()
#print(apropriadas)