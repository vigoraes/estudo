arq = open('../dados.txt', 'r')
dias = []
lista_maior_valor_soma = []
cont = 0
maior_valor = 0
valor_total = 0
soma_total = 0
quantidade = 0
for l in arq:
	if(cont == 0):
		lista_maior_valor_soma.append([maior_valor, valor_total])
		maior_valor = 0
		valor_total = 0
		dia_pagamentos = l.strip().split(',')
		dias.append(dia_pagamentos[0])
		cont = int(dia_pagamentos[1])		
	
	else:
		pagamento_atual = float(l)
		valor_total += pagamento_atual
		if(pagamento_atual > maior_valor and pagamento_atual > 40):
			maior_valor = pagamento_atual
		cont -= 1
		quantidade += 1
		soma_total += pagamento_atual

lista_maior_valor_soma.append([maior_valor, valor_total])
lista_maior_valor_soma.pop(0)
for i in range(len(dias)):
	print("No dia {} o valor total pago foi de {:.2f} e o maior valor pago: {:.2f}".format(dias[i],lista_maior_valor_soma[i][1],lista_maior_valor_soma[i][0]))
print ("O valor total pago: {:.2f}\tA quantidade de pagamentos: {}".format(soma_total, quantidade))