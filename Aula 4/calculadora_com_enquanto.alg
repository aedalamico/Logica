inicio
    variavel real numero1
    variavel real numero2
    variavel caracter operacao
    variavel texto mensagem
    variavel real resultado
    
    variavel caracter continuar <- "s"
    
    escrever "BEM VINDO A CALCULADORA"
    escrever "\n"
    
    enquanto (continuar = "s") faz
        escrever "Informe o primeiro numero"
        ler numero1
        escrever "Informe a operacao"
        ler operacao
        escrever "Informe o segundo numero"
        ler numero2
        se ( operacao = "+" ) entao
            resultado <- ( numero1 + numero2 )
        senao
            se ( operacao = "-" ) entao
                resultado <- numero1 - numero2
            senao
                se ( operacao = "*" ) entao
                    resultado <- numero1 * numero2
                senao
                    se ( operacao = "/" ) entao
                        se ( numero2 = 0 ) entao
                            mensagem <- "Divisao por 0"
                        senao
                            resultado <- numero1 / numero2
                        fimse
                    senao
                        mensagem <- "Operacao Invalida"
                    fimse
                fimse
            fimse
        fimse
        se ( mensagem =/= "" ) entao
            escrever mensagem
        senao
            escrever resultado
        fimse
        
        escrever "Deseja Continuar ? s - SIM ou n - NAO"
        ler continuar
        
    fimenquanto

fim