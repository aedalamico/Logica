
inicio
    inteiro valor 
    inteiro maiorv
    inteiro menorv
    constante inteiro media <- 500
    inteiro cont <- 0
    inteiro mediav //média final
    enquanto (cont <= 500) faz
        valor <- aleatorio
        cont <- cont + 1 
        se (maiorv < valor) entao
            maiorv <- valor
        fimse
        se (menorv > valor) entao
            menorv <- valor
        fimse
    fimenquanto
    mediav <- mediav/media
    escrever maiorv 
    escrever menorv  
    escrever mediav      
    
    
fim
