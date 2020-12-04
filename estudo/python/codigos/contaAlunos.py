alunos = [['didi', 'direito', 2015], ['joao', 'informatica', 2017], ['fulano', 'direito', 2011], ['joana', 'informatica', 2012], ['alberto', 'direito', 2015], ['alfredo', 'arquitetura', 2013], ['humberto', 'engenharia', 2007]]
def contaAlunosCurso(lista):
	cursos = []
	IQtAlunCurso = []	
	for i in lista:
		if(i[1] not in cursos):
			cursos.append(i[1])
			IQtAlunCurso.append([i[1], 1])
		else:
			IQtAlunCurso[cursos.index(i[1])][1] += 1
	return IQtAlunCurso
retorno = contaAlunosCurso(alunos)
for i in retorno:
	print('No curso de %s há um número de %d alunos' %(i[0], i[1]))