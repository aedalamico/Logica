inicio
    variavel real n1 //n�mero 1
    variavel real n2 //n�mero 2
    variavel real r //resultado
    variavel caracter op //opera��o
    variavel logico r1 <- verdadeiro //vari�vel de controle
    repete
        escrever "Informe um n�mero:"
        ler n1
        
        escrever "Informe a Opea��o a ser utilizada +, - , X, /"
        ler op
        
        escrever "Informe um n�mero:"
        ler n2
        
        r1 <- verdadeiro
        se (op = "+") entao
            r <- n1 + n2
        senao
            se (op = "-") entao
                r <- n1 - n2
            senao
                se (op = "X") ou (op = "x") ou (op = "*") entao
                    r <- n1 * n2
                senao
                    se (op = "/") entao
                        se (n2 = 0) entao
                            r1 <- falso
                            escrever "n�o existe divis�o por zero"
                        senao
                            r <- n1/n2
                        fimse
                    senao
                        r1 <- falso
                        escrever "Opera��o inv�lida, repita o processo \n"
                    fimse
                fimse
            fimse
        fimse
        se r1 entao
            escrever r
        fimse
    ate r1   
fim
