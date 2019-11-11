inicio
    variavel real n1 //número 1
    variavel real n2 //número 2
    variavel real r //resultado
    variavel caracter op //operação
    variavel logico r1 <- verdadeiro //variável de controle
    repete
        escrever "Informe um número:"
        ler n1
        
        escrever "Informe a Opeação a ser utilizada +, - , X, /"
        ler op
        
        escrever "Informe um número:"
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
                            escrever "não existe divisão por zero"
                        senao
                            r <- n1/n2
                        fimse
                    senao
                        r1 <- falso
                        escrever "Operação inválida, repita o processo \n"
                    fimse
                fimse
            fimse
        fimse
        se r1 entao
            escrever r
        fimse
    ate r1   
fim
