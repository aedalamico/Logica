/*  escrever o nome de tres pessoas
    Gravar o valor do sal�rio
    para cade pessoa devemos guardar o numero de filhos
    para cada filho, valor adicional de 10% do salario
    
    Fim, mostrar nome, a quantidade de filhos e o valor de sal�rio separadamente
    */
inicio
    variavel texto nome[3]
    variavel real salario[3]
    variavel inteiro numfilhos[3] <- {0,0,0}
    variavel inteiro cont <-0
    para cont de 0 ate 2 passo 1
        escrever "Informe o nome do funcion�rio :"
        ler nome [cont]
        escrever "Informe o sal�rio do funcion�rio :"
        ler salario [cont]
        escrever "Informe a quantidade de filhos do funcion�rio :"
        ler numfilhos [cont]
        se ( numfilhos [cont] > 0 ) entao
            salario [cont] <- salario [cont] + ((salario [cont] * 0.10) * numfilhos [cont]) //calculo do sal�rio
        fimse
    proximo
    para cont de 0 ate 2 passo 1
        se ( numfilhos [cont] > 0 ) entao
           escrever "\nFuncion�rio ", nome [cont], ", possui ", numfilhos [cont], " filhos", " e seu sal�rio ser� ", salario [cont]
        senao
            escrever "\nFuncion�rio ", nome [cont], ", n�o possui filhos e seu Sal�rio ser� ", salario [cont]
        fimse
    proximo
    
fim
