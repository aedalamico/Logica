/*  escrever o nome de tres pessoas
    Gravar o valor do salário
    para cade pessoa devemos guardar o numero de filhos
    para cada filho, valor adicional de 10% do salario
    
    Fim, mostrar nome, a quantidade de filhos e o valor de salário separadamente
    */
inicio
    variavel texto nome[3]
    variavel real salario[3]
    variavel inteiro numfilhos[3] <- {0,0,0}
    variavel real salariofim[3]
    variavel inteiro cont <-0
    para cont de 0 ate 2 passo 1
        escrever "Informe o nome do funcionário :"
        ler nome [cont]
        escrever "Informe o salário do funcionário :"
        ler salario [cont]
        escrever "Informe a quantidade de filhos do funcionário :"
        ler numfilhos [cont]
        se ( numfilhos [cont] > 0 ) entao
            salariofim [cont] <- salario [cont] + ((salario [cont] * 0.10) * numfilhos [cont]) //calculo do salário
        senao
            salariofim [cont] <- salario [cont]
        fimse
    proximo
    para cont de 0 ate 2 passo 1
        se ( numfilhos [cont] > 0 ) entao
           escrever "\nFuncionário ", nome [cont], ", possui ", numfilhos [cont], " filhos", " e seu salário seáa ", salariofim [cont]
        senao
            escrever "\nFuncionário ", nome [cont], ", não possui filhos e seu Salário será ", salariofim [cont]
        fimse
    proximo
    
fim
