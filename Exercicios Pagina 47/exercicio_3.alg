inicio
    inteiro valor
    inteiro menorvalor <- 0
    inteiro maiorvalor <- 0
    inteiro valortotal
    inteiro mediafinal
    inteiro cont <- 1
    constante inteiro media <- 500
    enquanto (cont <= media) faz
        valor <- INT (aleatorio() * 41)
        cont <- cont + 1
        se (maiorvalor < valor) entao
            maiorvalor <- valor
        fimse
        se (menorvalor = 0)entao
            menorvalor <- valor
        fimse
        se (menorvalor > valor) entao 
            menorvalor <- valor
        fimse
        valortotal <- valortotal + valor
    fimenquanto
    mediafinal <- valortotal / media
    escrever maiorvalor, "\n"
    escrever menorvalor, "\n"
    escrever mediafinal, "\n"
       
fim
