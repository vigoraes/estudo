def mediaDaNota(notas):
	soma = 0
	for i in notas:
		soma += float(i)
	media = soma / len(notas)
	return media

def abaixoDe70(nome_do_arquivo):	
	arquivo = open(nome_do_arquivo, 'r')
	aluno_nota = []
	alunosAbaixo = []
	somatorio = 0
	media_da_turma = 0
	for i, linha in enumerate(arquivo):
		if i % 2 == 0:
			nome = linha
		else:
			notas = linha.strip().split(',')
			m_Aluno = mediaDaNota(notas)
			media_da_turma += m_Aluno
			aluno_nota.append([nome, m_Aluno])
	media_da_turma /= len(aluno_nota)
	print(len(aluno_nota))
	for i in aluno_nota:
		if i[1] < media_da_turma:
			alunosAbaixo.append(i[0])
	arquivo.close()
	return alunosAbaixo
retorna = abaixoDe70('dados.txt')
print(retorna)
#print('Alunos com média menor que 70% da')		