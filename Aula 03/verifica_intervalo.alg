
inicio
    inteiro x
    inteiro y
    inteiro z
    escrever "Informe x"
    ler x
    escrever "informe y"
    ler y
    escrever "Informe z"
    ler z
    se (x = z) e (y = z) entao
        escrever "Todos os numeros são iguais"
    senao
        se (z >= x) e (z <= Y) entao
            escrever "No intervalo"
        senao
            se (z <= x) e (z >= Y) entao
                escrever "No intervalo"
            senao            
                escrever "Fora do intervalo"
            fimse
        fimse
    fimse
fim
