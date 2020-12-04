conjunto = 1

while conjunto < 4:
    print('Conjunto %d' % conjunto)
    primeiro = int(input('Digite um valor inteiro: '))
    segundo = int(input('Digite um valor inteiro: '))
    lidos = 2
    menor_lido = 0
    maior_lido = 0
    maior_diferenca = 0
    while lidos < 10:
        diferenca = abs(primeiro - segundo)
        if (diferenca > maior_diferenca):
            maior_diferenca = diferenca
            menor_lido = primeiro
            maior_lido = segundo
            if (diferenca > 100):
                break
        primeiro = segundo
        segundo = int(input('Digite um valor inteiro: '))
        lidos += 1
    print('\tValores adjacentes com maior diferença absoluta: %d %d\n' %
          (menor_lido, maior_lido))
    conjunto += 1