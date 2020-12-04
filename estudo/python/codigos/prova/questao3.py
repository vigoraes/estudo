antiga = [[111,['FIS155','Edu'],['MAT232','Mia'],['INF100','Jim'],['REL445','Teo']],
[333,['INF100','Ema'],['FIS155','Lea'],['ECO929','Val']],
[777,['REL445','Teo'],['FIS155','Lea'],['ECO929','Bia'],['INF100','Jim']],
[444,['REL445','Kim'],['INF100','Ema'],['FIS155','Edu']],
[888,['FIS155','Ada'],['MAT232','Mia'],['ECO929','Val'],['INF100','Jim']],
[222,['FIS155','Ada'],['MAT232','Bet'],['ECO929','Val'],['REL445','Teo']]]

atualizacao = [[463, 'INF100', 'Ema'], [888, 'QUI212', 'Nena'], [975,'ECO929', 'Val'],
[564, 'MAT232', 'Bet'], [975,'INF100','Ema']]

saidaEsperada =  [[111,['FIS155','Edu'],['MAT232','Mia'],['INF100','Jim'],['REL445','Teo']],
[333,['INF100','Ema'],['FIS155','Lea'],['ECO929','Val']],
[777,['REL445','Teo'],['FIS155','Lea'],['ECO929','Bia'],['INF100','Jim']],
[444,['REL445','Kim'],['INF100','Ema'],['FIS155','Edu']],
[888,['FIS155','Ada'],['MAT232','Mia'],['ECO929','Val'],['INF100','Jim'],['QUI212', 'Nena']],
[222,['FIS155','Ada'],['MAT232','Bet'],['ECO929','Val'],['REL445','Teo']], 
[463, ['INF100', 'Ema']],
[975, ['ECO929', 'Val'], ['INF100','Ema']],
[564, ['MAT232', 'Bet']]]

def atualizaLista(listaAntiga, atualizacao):
	for i in atualizacao:
		existe = False
		for index,j in enumerate(listaAntiga):
			if i[0] is j[0]:
				existe = True
				listaAntiga[index].append([i[1], i[2]])
		if existe is False:
			listaAntiga.append([i[0], [i[1], i[2]]])

	return antiga
atualizada = atualizaLista(antiga, atualizacao)
print(atualizada)

if atualizada == saidaEsperada:
	print('\nA função retorna a lista atualizada corretamente')
else:
	print('\na função não retorna a lista atualizada')