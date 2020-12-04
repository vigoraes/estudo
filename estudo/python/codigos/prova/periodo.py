listaAlunos = [
    [
        111, ['FIS155', '2018_1'], ['MAT232', '2018_1'], ['INF100', '2019_1'],
        ['REL445', '2020_1']
    ],
    [333, ['INF100', '2017_1'], ['FIS155', '2017_2'], ['ECO929', '2020_1']],
    [
        777, ['REL445', '2019_1'], ['FIS155', '2019_2'], ['ECO929', '2019_2'],
        ['INF100', '2020_1']
    ],
    [444, ['REL445', '2015_1'], ['INF100', '2015_1'], ['FIS155', '2016_1']],
    [
        888, ['FIS155', '2017_1'], ['MAT232', '2017_2'], ['ECO929', '2019_1'],
        ['INF100', '2020_1']
    ],
    [
        222, ['FIS155', '2016_1'], ['MAT232', '2016_2'], ['ECO929', '2017_1'],
        ['REL445', '2017_2']
    ],
]

esperado = [[2015, 2], [2016, 3], [2017, 6], [2018, 2], [2019, 5], [2020, 4]]


def contabilizaAlunosPorAno(alunos):
    lista = [[2015, 0], [2016, 0], [2017, 0], [2018, 0], [2019, 0], [2020, 0]]

    for aluno in alunos:
        inscricoes = aluno[1:]
        for inscricao in inscricoes:
            ano_disciplina = int(inscricao[1].split('_')[0])
            tinha = False
            for i, ano in enumerate(lista):
                if ano[0] == ano_disciplina:
                    lista[i] = [lista[i][0], lista[i][1] + 1]
                    tinha = True
            if not tinha:
                lista.append([ano_disciplina, 1])
    return lista


resultado = contabilizaAlunosPorAno(listaAlunos)
if resultado == esperado:
    print(contabilizaAlunosPorAno(listaAlunos))