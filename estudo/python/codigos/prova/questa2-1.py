def Turma_media(lista):
	somatorio_da_Turma = 0
	for i in lista:
		somatorio_da_Turma += i[1]
	media_da_Turma = somatorio_da_Turma / len(lista)
	return media_da_Turma
def media(notas):
	soma = 0
	for i in notas:
		soma += float(i)
	media = soma / len(notas)
	return media

def LeArquivo():
	arquivo = open('dados.txt', 'r')
	aluno_nota = []
	for i, linha in enumerate(arquivo):
		if i % 2 == 0:
			nomeDoAluno = linha
			#print(nomeDoAluno)
		else:
			notas = linha.strip().split(',')
			media_Do_Aluno = media(notas)
			#print(media_Do_Aluno)
			#soma_da_turma += media_Do_Aluno
			aluno_nota.append([nomeDoAluno, media_Do_Aluno])
	arquivo.close();
	media_da_Turma = Turma_media(aluno_nota)
	print('Alunos com média menor que 70% da turma:')
	for i, j in aluno_nota:
		if j < media_da_Turma * 0.7:
			print('\t%s' %i, end = '')
	return aluno_nota
LeArquivo()


